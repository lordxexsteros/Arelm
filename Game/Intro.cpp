#include "Game/Intro.h"
#include "Game/utils.h"

// Function definitions
void greet_user(const std::string &user)
{
    std::cout << "Hello " << user << "!" << std::endl;
    std::cout << "I am O8, your personal assistant." << std::endl;
    std::cout << "I will guide you through this journey" << std::endl;
    cls();
    timer(3);
    text("hey what are you doi....", 100);
    text("System Shut Down....", 100);
    cls();

    text("Initializing system...", 100);
    cls();
    text("System ready", 100);
    timer(3);
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