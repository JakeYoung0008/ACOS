#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to ACOS 0.1 !!\n"
         << "Written by \"Jake\"\n\n";

    // Login Section
    string username;
    string password;
    cout << "Enter your Username: ";
    cin >> username;

    cout << "Enter your Password: ";
    cin >> password;

    // User page
    if (username == "andy" && password == "1234")
    {
        system("clear");
        cout << "Welcome to ACOS Andy!\n\n";
        string option;

        while (true)
        {   
            cout << "Enter the Command: ";
            cin >> option;

            // Help command
            if (option == "help")
            {
                system("clear");
                cout << "Welcome to the help!\n"
                    << "You are currently running ACOS 0.1! Or \"A Clunky Operating System\"!\n\n"
                    << "The current main commands are,\n"
                    << "1. help - The page that you are looking at now.\n"
                    << "2. exit - Exits the session.\n"
                    << "3. clear - Clears the screen.\n";
            }

            // Exit command
            else if (option == "exit") {
                return 0;
            }
            // Clear command
            else if (option == "clear") {
                system("clear");
            }
            //Unavailable commands; add new features above this line...
            else {
                cout << "Bad command. Use the term \"Help\" to get help.\n";
            }
        }
    }
    else
    {
        cout << "Wrong username or password.\n";
    }
}