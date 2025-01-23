#include "Game/Rooms/rooms.h"
#include "Game/utils.h"
void q2()
{
    std::string answer;
    text("prem: ", 150);
    text("a) ", 150);
    text("b) ", 150);
    text("c) ", 150);
    text("d) ", 150);
    text("choose an option:", 150);
    std::cin >> answer;
    if (answer == "")
    {
        text("prem: correct, you can go to the next room", 150);
        cls();
    }
    else
    {
        text("prem: wrong, try again", 150);
        cls();
        q2();
    }
}

void room2(std::string user)
{
    text("Initializing system...", 100);
    cls();
    text("System ready", 100);
    timer(3);
    cls();
    text("room 2", 300);
    cls();
    text("08: Hey good to see you again", 80);
    timer(1);
    text("ME: Me too", 80);
    timer(1);
    text("08: You have to find a way out of this room", 80);
    timer(1);
    text("ME: again?", 80);
    timer(1);
    text("08: Yep, you have to find a way out of this room", 80);
    timer(1);
    text("ME: ok", 80);
    cls();
    timer(1);
    text("ME: Hey!", 80);
    timer(1);
    text("08: What?", 80);
    timer(1);
    text("ME: what's your name", 80);
    timer(1);
    text("08: I am v", 80);
    text("ME: v?", 80);
    timer(1);
    text("08: I am 08 your helper, why?", 80);
    timer(1);
    text("ME: nothing", 80);
    timer(1);
    text("08: ok", 80);
    cls();
    timer(1);
    text("ME: I am going to find a way out", 80);
    timer(1);
    text("08: Good luck", 80);
    timer(1);
    text("ME: thanks", 80);
    timer(1);
    text("08: I will be here", 80);
    timer(1);
    text("ME: ok", 80);
    timer(1);
    cls();
    text("You see a shiny object", 80);
    timer(1);
    text("08: Hey, what are you doing", 80);
}
