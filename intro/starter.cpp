#include "Game.h"

// Single include for all headers

int main()
{
    cout << "Welcome to Arlem" << endl;
    cout << "To skip intro press e and s to start" << endl;
    char choose;
    cin >> choose;

    if (choose == 'e')
    {
        cout << "Skipping intro" << endl;
        cls();
    }
    else
    {
        cout << "Starting intro" << endl;

        cls();
        text("You are a warrior in the lands of Arelm", 80);
        text("You must defeat the evil that lurks in the shadows.", 80);
        timer(3);

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
    }

    // Get user's name

    return 0;
}