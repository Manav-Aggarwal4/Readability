# CS50 Readability Project

## Overview
This project is focused on building a program that evaluates the readability of a given text. The program calculates the reading level of a piece of text using the Coleman-Liau index, which outputs a U.S. grade level for the text.

## Coleman-Liau Index Formula
The formula to compute the readability score is:
index = 0.0588 * L - 0.296 * S - 15.8

Where:
- `L` is the average number of letters per 100 words.
- `S` is the average number of sentences per 100 words.

Based on the output of this formula:
- If the result is 1, the text is at a 1st-grade level.
- If the result is 2, the text is at a 2nd-grade level, and so on.
- If the result is 16 or higher, the text is at a college level.

## Features
- **Input**: The program takes a block of text input from the user.
- **Output**: It returns the approximate U.S. grade level needed to understand the text.
  - If the result is below Grade 1, the program prints `Before Grade 1`.
  - If the result is Grade 16 or above, the program prints `Grade 16+`.

## Installation
To run this project, you'll need to have the CS50 library installed. You can follow these steps:


Clone this repository:
   ```bash
   git clone https://github.com/your-username/cs50-readability
   cd cs50-readability

