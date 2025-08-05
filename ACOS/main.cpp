#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to ACOS 0.1 !!\n"
         << "Written by \"Jake\"\n\n";

    // Login Section
    string username = "";
    string password = "";
    cout << "Enter your Username: ";
    cin >> username;

    cout << "Enter your Password: ";
    cin >> password;

    // User page
    if (username == "andy" && password == "1234")
    {
        system("clear");
        cout << "Welcome to ACOS Andy!\n\n";
        string option = "";

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
                     << "3. clear - Clears the screen.\n"
                     << "4. calc - Calulator\n";
            }

            // Exit command
            else if (option == "exit")
            {
                return 0;
            }
            // Clear command
            else if (option == "clear")
            {
                system("clear");
            }

            // calc command
            else if (option == "calc")
            {
                int operation{};
                int num1{};
                int num2{};
                int answer{};

                system("clear");

                cout << "Welcome to the calculator.\n\n";
                cout << "In this application, you can enter 2 numbers and enter a number corresponding to the you prefered operation which is listed below: \n"
                     << "1 - Addition\n"
                     << "2 - Subtraction\n"
                     << "3 - Multiplication\n"
                     << "4 - Division\n"
                     << "5 - Modulus\n\n";

                cout << "For now thats what you get unfotunetely; Since I am a beginner to this whole programming thing. Have Fun!\n\n";

                cout << "Enter your first number: ";
                cin >> num1;
                cout << '\n';

                cout << "Enter your second number: ";
                cin >> num2;
                cout << '\n';

                cout << "Enter the number for the prefered operation: ";
                cin >> operation;
                cout << '\n';

                switch (operation)
                {
                    case 1:
                        answer = num1 + num2;
                        cout << "The answer is: " << answer << "\n\n";
                        break;

                    case 2:
                        answer = num1 - num2;
                        cout << "The answer is: " << answer << "\n\n";
                        break;

                    case 3:
                        answer = num1 * num2;
                        cout << "The answer is: " << answer << "\n\n";
                        break;

                    case 4:
                        answer = num1 / num2;
                        cout << "The answer is: " << answer << "\n\n";

                        break;

                    case 5:
                        answer = num1 % num2;
                        cout << "The answer is: " << answer << "\n\n";
                        break;

                    default:
                        cout << "In correct numbers or Invalid operation.\n\n";
                        break;
                }
            }

            // Unavailable command; add new features above this line...
            else
            {
                cout << "Bad command. Use the term \"Help\" to get help.\n";
            }
        }
    }
    else
    {
        cout << "Wrong username or password.\n";
    }
}
