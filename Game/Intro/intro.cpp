#include "intro.h"

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