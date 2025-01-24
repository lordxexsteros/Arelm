#include "Utils.h"
#include <iostream>
#include <thread>
#include <chrono>

// Clear the screen
void cls()
{
    std::cout << "\033[2J\033[1;1H";
}

// Pause execution
void timer(int sec)
{
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}

// Print text with delay
void text(const std::string &text, int delay_ms)
{
    for (char c : text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    std::cout << std::endl;
}

// Get user's name
std::string get_name()
{
    std::string name;
    std::cout << "May I know your name? ";
    std::getline(std::cin, name); // Handles spaces in names
    return name;
}