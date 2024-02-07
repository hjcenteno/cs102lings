/* Program Name: Penname
 * Student Name: Henry Centeno
 * Net ID: hcenteno
 * Student ID: 000-68-7923 STUDENT ID HERE (000-12-3456)
 * Program Description: The purpose of the program is to allow the author to create a penname using the fist and middle name, 
 * then asking for the age, their address, and the city they were born in. The First name is the author's birth city, last name is the 
 * street name and the new age is the remainder of the street number by the author's age multiplied by 3, the new numeric address is the 
 * age multiplied by 425 the divided by their current street number, and lastly, the new  street name is the authors last name with the 
 * unchanged street type. */

//! Remember: your comments Remember: your
//! formatting and indentation
//  - auto-format in vim: gg=G in normal mode, in vscode: alt+shift+f
//! Remember: check your solution with the gradescripts
//  - gradescript command: `python3.11 scripts/test.py penname.cpp`

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    // TODO
    string first, middle, city, strName, strType; 
    int age, strNum;

    cout << "Enter your first: ";
    cin  >> first;
    cout << endl;

    cout << "Enter your middle: ";
    cin  >> middle;
    cout << endl;

    cout << "Enter your age: ";
    cin  >> age;
    cout << endl;

    cout << "Enter your street number: ";
    cin  >> strNum;
    cout << endl;

    cout << "Enter your street name: ";
    cin  >> strName;
    cout << endl;

    cout << "Enter your street type: ";
    cin  >> strType;
    cout << endl;
 
    cout << "Enter your city of birth: ";
    cin  >> city;
    cout << endl;

    cout << "Your penname name is " << city << " " << strName << "." << endl;
    cout << "You will write as a "  << (strNum % age)*3 << " year old." << endl;
    cout << "Your address is "      << (age * 425) / strNum << " " << middle << " " << strType << endl;
    return 0;
}
