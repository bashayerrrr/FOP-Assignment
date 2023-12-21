#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool isValidPassword(const string& password) {
    bool hasLowercase = false, hasUppercase = false, hasDigit = false, hasSpecial = false;
    string allowedSpecialChars = "!@_-;:.?";

    for (char c : password) {
        if (islower(c)) {
            hasLowercase = true;
        } else if (isupper(c)) {
            hasUppercase = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (allowedSpecialChars.find(c) != string::npos) {
            hasSpecial = true;
        }
    }
    return password.length() >= 8 && hasLowercase && hasUppercase && hasDigit && hasSpecial;
}
int main() {
	string password, confirmPassword;
	string allowedSpecialChars = "!@_-;:.?";

    // Password setup
    cout << "Enter a new password: ";
    
    // Enhanced password strength check
    while (getline(cin, password)) {
        if (!isValidPassword(password)) {
            cout << "Password must meet the following requirements:\n"
                 << "- At least 8 characters long\n"
                 << "- Contain at least one lowercase letter\n"
                 << "- Contain at least one uppercase letter\n"
                 << "- Contain at least one digit\n"
                 << "- Contain at least one of the following special characters: "
                 << allowedSpecialChars << endl
                 << "Please try again: ";
        } else {
            break;  // Password is valid
        }
    }

    // Password confirmation
    do {
        cout << "Confirm password: ";
        getline(cin, confirmPassword);

        if (confirmPassword != password) {
            cout << "Passwords do not match. Please try again." << endl;
        }
    } while (confirmPassword != password);


    cout << "Password set successfully!" << endl;

    // Password entry
    string enteredPassword;
    int attempts = 0;

    do {
        cout << "Enter password: ";
        cin >> enteredPassword;

        attempts++;

        if (enteredPassword == password) {
            cout << "Password correct!" << endl;
            break;
        } else {
            cout << "Incorrect password. " << (3 - attempts) << " attempts remaining." << endl;
            // Clear input stream to avoid infinite loop on invalid input
            cin.clear();

        }
    } while (attempts < 3);

    if (attempts == 3) {
        cout << "Too many incorrect attempts. Access denied." << endl;
    }

    return 0;
}

