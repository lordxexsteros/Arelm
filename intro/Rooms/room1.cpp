#include "rooms.h"

// Helper function for the quiz (only visible in this file)
void q1()
{
    std::string answer;
    text("prem: what is the capital of india?", 150);
    text("a) Delhi", 150);
    text("b) Mumbai", 150);
    text("c) Chennai", 150);
    text("d) Kolkata", 150);
    text("choose an option:", 150);
    std::cin >> answer;
    if (answer == "a")
    {
        text("prem: correct, you can go to the next room", 150);
        cls();
    }
    else
    {
        text("prem: wrong, try again", 150);
        cls();
        q1();
    }
}

void room1(const std::string &user)
{
    // Full dialogue for room1
    text("08: Hello!", 80);
    timer(1);
    text("ME: ahhh!!!", 80);
    timer(1);
    text("08: Don't be afraid, I am here to help you", 80);
    timer(1);
    text("ME: where am I?", 80);
    timer(1);
    text("08: You are in Arlem, a world of magic and mystery", 80);
    timer(1);
    text("ME: what am I doing here?", 80);
    timer(1);
    text("08: I don't know, but I will help you find out", 80);
    timer(1);
    text("ME: what should I do?", 80);
    timer(1);
    text("08: You have to find a way out of this room", 80);
    timer(1);
    text("ME: how?", 80);
    timer(1);
    text("08: Look around, there might be a hidden passage", 80);
    timer(1);
    text("ME: ok, I will try", 80);
    timer(1);
    text("08: Good luck!", 80);
    timer(1);
    cls();
    text("You are searching ...", 80);
    timer(5);
    text("You found a hidden passage", 80);
    cls();
    timer(1);
    text("ME: I found a hidden passage", 80);
    timer(1);
    text("08: Great! Let's go through it", 80);
    cls();
    timer(2);
    text("You went in..", 80);
    cls();
    timer(2);
    text("ME: I am in a dark corridor", 80);
    timer(1);
    text("08: Be careful, there might be traps", 80);
    timer(1);
    text("ME: I will be careful", 80);
    timer(1);
    text("08: Good luck!", 80);
    cls();
    text("ME: wait your not coming?", 80);
    timer(1);
    text("08: I can't go with you", 80);
    timer(1);
    text("ME: why?", 80);
    timer(1);
    text("08: I am just a program, I can't leave this room", 80);
    timer(1);
    text("08: I will meet on the other side", 80);
    timer(1);
    text("ME: oh ok :(", 80);
    cls();
    timer(3);
    text(".....: HELLO", 80);
    timer(1);
    text("Me: ?, who are you?", 80);
    timer(1);
    text("prem: I am the guardian of this place prem", 80);
    timer(1);
    text("Me: what do you want?", 80);
    timer(1);
    text("prem: I want to test your mind", 80);
    timer(1);
    text("Me: what do you mean?", 80);
    timer(1);
    text("prem: you have to solve the question to go to the next room", 80);
    timer(1);
    text("Me: ok, what is the question?", 80);
    timer(1);
    cls();
    q1(); // Call the quiz
    text("You see a white light come from the end", 80);
    timer(1);
    text("prem: cya soon", 80);
    timer(1);
    cls();
    text("System Shut Down....", 100);
    cls();
    timer(5);
}
