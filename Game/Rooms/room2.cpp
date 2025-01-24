#include "rooms.h"

// Helper function for the quiz
void q2()
{
    std::string answer;
    text("prem: hi, Thanks for playing bye ", 150);
    text("a) Play again? ", 150);
    text("b) Quit", 150);

    text("choose an option:", 150);
    std::cin >> answer;
    if (answer == "a")
    { // Check for empty input
        text("prem: ok", 150);
        cls();
    }
    else
    {
        text("ok", 150);
        cls();
    }
}

void room2(const std::string &user)
{
    // Full dialogue for room2
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
    timer(1);
    text("ME: I see a shiny object", 80);
    timer(1);
    text("08: Where?", 80);
    timer(1);
    text("ME: there", 80);
    timer(1);
    text("08: There is nothig there", 80);
    timer(1);
    text("ME: what?", 80);
    timer(1);
    text("08: There is nothing there", 80);
    timer(1);
    text("ME: oh ok", 80);
    timer(1);
    cls();
    text("You see a white light come from the end", 80);
    timer(1);
    cls();
    text("ME: hey i see the exit", 80);
    timer(1);
    text("08: good job", 80);
    timer(1);
    text("ME:Lets goo!!", 80);
    timer(1);
    cls();
    text("system shutting down...", 100);
    cls();
    timer(5);

    q2();
}

// Call the quiz
