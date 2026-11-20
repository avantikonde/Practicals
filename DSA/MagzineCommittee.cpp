/* Question: A magazine committee consists of any 3 members selected from:
Nikhita, Aboli, Megha, Sanika, Pratik and Saurabh.
Write a C++ program to display all possible committees.
*/
#include<iostream>
using namespace std;

int main() {
    string names[6] {
        "Nikhita",
        "Aboli",
        "Megha",
        "Sanika",
        "Pratik",
        "Saurabh"
    };

    int count = 0;
    cout << "Possible Committees:" << endl;

    for (int i = 0; i < 6; i++) {
        for (int j = i +1; j < 6; j++) {
            for (int k = j +1; k < 6; k++) {
                cout << ++count << ". ";
                cout << names[i] << ", " << names[j] << ", " << names[k] << endl;
            } 
        }
    }

    cout << "Total number of Possible Magazine Committees:" << count << endl;
    return 0;
}
