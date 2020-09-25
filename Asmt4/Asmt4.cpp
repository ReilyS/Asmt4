// Asmt4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector wassap;
    wassap.push(23);
    cout << wassap[0];
    Vector wassap2(wassap);
    cout << wassap2[0];
}

