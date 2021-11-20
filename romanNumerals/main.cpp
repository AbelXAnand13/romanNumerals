//Abel Anand
//RomanNumerals
#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
using namespace std;
int main() {
    int number;
    int choice;
    bool quit = false;
    bool quit1 = false;
    int runTime = 0;
    while (!quit) {
        quit1 = false;
        if (runTime > 0) {
        cout << "\nDo you want to convert a Number to Roman Numerals again(1) or do you want to quit(2)\n";
        }
        else {
            cout << "Do you want to convert a Number to Roman Numerals(1) or do you want to quit(2)\n";
        }
        cin >> choice;
        switch (choice) {
            case 1:
    cout << "Enter a positve number less than or equal to 3999\nWatch as it turns into Roman numerals...\n";
    while (!quit1) {
    cin >> number;
    if (number <= 3999) {
        while (1000 <= number) {
            cout << "M";
            number = number - 1000;
        }
        while (900 <= number) {
            cout << "CM";
            number = number - 900;
        }
        while (500 <= number) {
            cout << "D";
            number = number - 500;
        }
        while (400 <= number) {
            cout << "CD";
            number = number - 400;
        }
        while (100 <= number) {
            cout << "C";
            number = number - 100;
        }
        while (90 <= number) {
            cout << "XC";
            number = number - 90;
        }
        while (50 <= number) {
            cout << "L";
            number = number - 50;
        }
        while (40 <= number) {
            cout << "XL";
            number = number - 40;
        }
        while (10 <= number) {
            cout << "X";
            number = number - 10;
        }
        while (9 <= number) {
            cout << "IX";
            number = number - 9;
        }
        while (5 <= number) {
            cout << "V";
            number = number - 5;
        }
        while (4 <= number) {
            cout << "IV";
            number = number - 4;
        }
        while (1 <= number) {
            cout << "I";
            number = number - 1;
        }
        runTime ++;
        quit1 = true;
    }
    else{
        cout << "Please enter a valid digit\n";
    }
    }
    break;
            case 2:
                quit = true;
                break;
            default:
                cout << "Please enter a valid number...\n";
                break;
    }
    }
}
