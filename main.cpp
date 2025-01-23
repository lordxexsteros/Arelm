#include "Game/Game.h"
#include "Game/Rooms/rooms.h"
#include "Game/utils.h"
#include "Game/Intro.h"
using namespace std;

int main()
{
    cout << "Welcome to Arlem" << endl;

    // variables
    string user = get_name(user);

    // get user name

    // greet user
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
    return 0;
}