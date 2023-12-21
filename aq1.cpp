#include <iostream>
using namespace std;
/* Write a C++ program, take two strings as input from user and check if both strings are equal or not. If they are equal make them unequal by rotating string. e.g., Hello is turned into olleH etc */

int main() {
	string str1, str2;
	cout << "Enter string 1: ";
	getline(cin, str1);
	cout << "Enter string 2: ";
	getline(cin, str2);
	
	if (str1==str2) {
		int finish, start;
		start=0;
		finish=str2.length()-1;	
		while (start<finish) {
			char temp;
			temp=str2[finish];
			str2[finish]=str2[start];
			str2[start]=temp;
			start++;
			finish--;	
		}
		cout << "String 1: " << str1 << endl;
		cout << "String 2: " << str2 << endl;
	} else {
		cout << "Strings are not equal.";
	}
	
	return 0;
}