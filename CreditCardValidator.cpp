#include "bits-stdc++.h"
#include <iostream>
using namespace std;

// Returns true if given card number is valid
bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();
    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {

        int d = cardNo[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}

int main()
{
    string cardNo;
    cout << "Please enter card no: ";
    cin >> cardNo;
    if (checkLuhn(cardNo))
        printf("This is a valid card");
        if (cardNo[0] = 3)
        cout << "This is a American Express Card." << endl;
        else if (cardNo[0] = 4)
            cout << "This is a Visa Card." << endl;
        else if (cardNo[0] = 5)
            cout << "This is a Master Card." << endl;
        else if (cardNo[0] = 6)
            cout << "This is a Discover Card." << endl;
    else
        printf("This is not a valid card");
    return 0;
}