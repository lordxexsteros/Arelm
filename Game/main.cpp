#include "Game.h"

// Single include for all headers

using namespace std;

int main()
{
    cout << "Welcome to Arlem" << endl;

    // Get user's name
    string user = get_name();

    // Greet user
    cls();
    greet_user(user);
    timer(3);
    cls();

    intro();
    timer(7);
    cls();

    room1(user);
    cls();

    room2(user);
    cls();

    return 0;
}