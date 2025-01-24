# ARLEM - Text-Based Adventure Game

![Game Preview](screenshots/preview.png) 

## Description
A text-based adventure game set in the magical world of Arlem. Navigate through rooms, solve puzzles, and interact with characters to progress. Built with C++.

## Features
- Multiple interactive rooms with unique challenges
- Dialogues with in-game characters (08 and Prem)
- Quiz-based puzzles
- Terminal-based text animations and delays
- System simulation effects (e.g., "shutting down" sequences)

## Installation
1. Clone the repository:
  ```bash
   git clone https://github.com/lordxexsteros/Arlem.git
   cd Arlem
   ```

## Run The Game
1. Without Compiling  
    ```bash
    ./Arlem
    ```
2. With Compiling  
    ```bash
    g++ -g Game/*.cpp Game/Rooms/*.cpp Game/Intro/*.cpp Game/Sets/*.cpp -o Arelm
    ./Arlem
    ```