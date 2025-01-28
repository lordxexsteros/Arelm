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

void greet_user(const std::string &user)
{
    // Show greeting messages
    text("Hello " + user + "!", 80); // Use `text()` for consistency
    text("I am O8, your personal assistant.", 80);
    text("I will guide you through this journey", 80);
    timer(3); // Let the user read the messages
    cls();
    text("hey what are you doing....", 100);
    text("System Shut Down....", 100);
    cls();
}

void intro()
{
    text("you woke up in a dark room, you can't see anything....", 150);
    timer(3);
    cls();
    text("you can only hear the sound of water drops....", 150);
    timer(3);
    cls();
    text("you can't remember anything....", 150);
    timer(3);
    cls();
}