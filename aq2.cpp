#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    string resultString = "";

    for (auto it = inputString.begin(); it != inputString.end(); ++it) {
    	char ch = *it;
        char lowercaseCh = tolower(ch);
        bool isDuplicate = false;

		for (auto resultIt = resultString.begin(); resultIt != resultString.end(); ++resultIt) {
            if (tolower(*resultIt) == lowercaseCh) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            resultString += ch;
        }
    }
    cout << "Resultant string after removing duplicates: " << resultString << endl;
    return 0;
}
