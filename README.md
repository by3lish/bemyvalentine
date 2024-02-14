# SFML Valentine's Day Card

This simple C++ program creates a Valentine's Day card using the SFML library. It displays an image of a heart and the text "Be my valentine!" in a window.

## Description

This program utilizes the SFML library to create a Valentine's Day card. It displays an image of a heart and the message "Be my valentine!" in a window. The code is written in C++ and can be easily customized to display different messages and images.

## Installation

1. Make sure you have SFML installed on your system. You can download it from [SFML website](https://www.sfml-dev.org/download.php) or install it using package managers like `apt`,`brew` or `pacman`.

2. Clone the repository or download the source code files.

3. Compile the code using a C++ compiler. For example:

   ```bash
   g++ main.cpp -o valentine -lsfml-graphics -lsfml-window -lsfml-system
   ```
## Usage
For start program after compile:

`./valentine`

Once you run the program, a window will open displaying the Valentine's Day card. You can close the window by clicking the close button.
## Customization
You can customize the message by modifying the text in the code:

`sf::Text text("Be my valentine!", font, 24);`

You can also change the image by replacing ily.jpg with your desired image file.

