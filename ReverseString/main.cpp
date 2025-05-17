#include <iostream>
#include <cstring>

using namespace std;

void main() {
    char input[30];

    while (true)
    {
        cout << "Enter a Text But less than 30 characters: " << endl;
        cin.getline(input, 30);

        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input too long. Please enter less than 30 characters.\n";
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
    }
}
