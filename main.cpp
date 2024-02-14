#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
    window.clear(sf::Color(255, 182, 193)); 

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Error: Font file not found" << std::endl;
        return 1;
    }

    sf::Texture texture;
    if (!texture.loadFromFile("ily.jpg")) {
        std::cerr << "Error: Image file not found" << std::endl;
        return 1;
    }


    texture.setSmooth(true); 
    sf::Sprite sprite(texture);
    sprite.setScale(350.f / texture.getSize().x, 350.f / texture.getSize().y); 

    sprite.setPosition(window.getSize().x / 2.f - sprite.getGlobalBounds().width / 2.f,
                       window.getSize().y / 2.f - sprite.getGlobalBounds().height / 2.f); 

    sf::Text text("Be my valentine!", font, 24);
    text.setFillColor(sf::Color::Red);
    text.setPosition(window.getSize().x / 2.f - text.getGlobalBounds().width / 2.f,
                      sprite.getPosition().y + sprite.getGlobalBounds().height + 20.f); 

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color(255, 182, 193)); 
        window.draw(sprite);
        window.draw(text);
        window.display();
    }

    return 0;
}
