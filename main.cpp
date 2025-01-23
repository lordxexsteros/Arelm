#include <iostream>
#include <thread>
#include <chrono>

auto cls() { std::cout << "\033[2J\033[1;1H"; } // clear the screen
auto timer(int sec) { std::this_thread::sleep_for(std::chrono::seconds(sec)); }
auto text = [](const std::string &text, int delay_ms)
{
    for (char c : text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    std::cout << std::endl;
};

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
void room1(std::string user)
{
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
    text("prem: you have to slove the question to go to the next room", 80);
    timer(1);
    text("Me: ok, what is the question?", 80);
    timer(1);
    cls();
    q1();
    text("You see a white light come form the end", 80);
    timer(1);
    text("prem: cya soon", 80);
    timer(1);
    cls();
    text("System Shut Down....", 100);
    cls();
    timer(5);
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
int main(){
    std::cout << "Welcome to Arlem" << std::endl; 

    // variables
    std::string user;  

    // Get user name
    std::cout << "May I know your name? ";
    std::cin >> user;
    greet_user(user); // greet user
    timer(5);
    cls();


    text("Initializing system...", 100);
    cls();
    text("System ready", 100);
    timer(3);
    cls();


    timer(3);
    cls();
    intro();
    timer(7);

    room1(user);
    
    room2(user);
    return 0;
}