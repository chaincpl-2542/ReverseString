#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

void main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    char input[30];

    while (true)
    {
        cout << "----------------------------------------------------" << endl;
        cout << "Develop by Peeranat Luangaram 6738228" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Enter a Text But less than 30 characters: " << endl;
        cin.getline(input, 30);

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input too long. Please enter less than 30 characters.\n";
            cout << "----------------------------------------------------" << endl;
            continue;
        }

        cout << "Original Text: " << input << endl;

        char* ptr = input + strlen(input) - 1;

        cout << "Reversed Text: ";
        while (ptr >= input) {
            cout << *ptr;
            ptr--;
        }
        cout << endl;

        cout << "------------------------------" << endl;

        assert(_CrtCheckMemory());
        _CrtDumpMemoryLeaks();
    }
}
