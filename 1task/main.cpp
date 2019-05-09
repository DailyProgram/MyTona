#include <iostream>

#include <iostream>
#include <string.h>

using namespace std;


int main() {
    string input;
    char sep;
    int i = 0;
    int j = 0;

    cin >> input;
    cin >> sep;


    while (i <= input.length()) {
        if (input[i] == sep || i == input.length()) {

            char *bufstr = new char[i - j];

            memcpy(&bufstr[0], &input[j], i - j);
            bufstr[i - j] = '\0';

            cout << bufstr << endl;
            j = i + 1;
        }

        i++;
    }
    return 0;
}