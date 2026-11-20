/* This program covers all six operations mentioned in your DSA practical question:
Copy a string
Concatenate two strings
Check whether a substring exists
Check whether two strings are equal
Reverse a string
Find the length of a string
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2, copied, sub, reversed;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    //copying
    copied = str1;
    cout << "\nCopied String is: " << copied;

    //concatenate
    cout << "\nConcatenation of two strings is: " << str1 + str2;

    //substring exists
    cout<< "\nEnter substring to check: ";
    getline(cin, sub);

    if (str1.find(sub) != string::npos)
        cout << "Substring found" << endl;
    else 
        cout << "Substring not found" << endl;


    //equality

    if(str1 == str2) 
        cout << "Strings are equal" << endl;
    else 
        cout << "Strings are not equal" << endl;
    

    //reverse
    reversed = str1;
    reverse(reversed.begin(), reversed.end());
    cout << "\nReversed String is: " << reversed;

    //length
    cout << "\nLength of first string: " << str1.length() << endl;

}
