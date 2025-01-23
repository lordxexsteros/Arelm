#include "Game/utils.h"
#include <thread>
#include <chrono>
#include <iostream>
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
auto get_name(std::string user)
{
    std::string name;
    std::cout << "May I know your name? ";
    std::cin >> name;
    return name;
}
