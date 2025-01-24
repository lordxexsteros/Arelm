# ARLEM - Text-Based Adventure Game



## Description  
**ARLEM** is a terminal-based adventure game (***currently under development***) set in a surreal world of magic and cryptic challenges. You play as an unnamed protagonist trapped in Arlem, guided (or hindered) by 08, an AI with a penchant for sarcasm. To escape, you must:  
- Solve Prem’s devious quizzes in rooms like *The Corridor of Shadows* and *The Chamber of Echoes*.  
- Navigate timed dialogues and terminal "system effects" (e.g., simulated shutdowns) for immersion.  
- Uncover hidden passages and piece together the mystery of Arlem.  

Built in **C++** with a modular design, each room (e.g., `room1.cpp`, `room2.cpp`) is a self-contained challenge, making it easy to expand the game. No external libraries are used—just raw terminal magic.  

**Note**: This project is actively evolving! Planned features include:  
- More rooms with branching storylines  
- Save/load functionality  
- ASCII art for key scenes  
- Expanded character interactions  

Feedback and contributions are always welcomed!  

##  Features
- Multiple interactive rooms with unique challenges
- Dialogues with in-game characters (08 and Prem)
- Quiz-based puzzles
- Terminal-based text animations and delays
- System simulation effects (e.g., "shutting down" sequences)

##  Requirements

- Git >= **2.19.0** 
- a [Nerd Font](https://www.nerdfonts.com/) **_(optional)_**
- a **C++** compiler for `Compliling`**_(I used GCC)_** Visit [C++ Compilers](https://en.wikipedia.org/wiki/Category:C%2B%2B_compilers) for more info.

## Getting Started

 - Clone the repository:
  ```bash
   git clone https://github.com/lordxexsteros/Arlem.git
   cd Arlem
   ```

## Run The Game
 - Without Compiling  
    ```bash
    ./Arlem
    ```
 - With Compiling  
   ```bash
    g++ -g Game/*.cpp Game/Rooms/*.cpp Game/Intro/*.cpp Game/Sets/*.cpp -o Arelm
    ./Arlem
   ```
