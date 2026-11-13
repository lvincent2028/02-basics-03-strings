/*
 *   Assignment: Desmos C++ Working with Strings
 *      Purpose: Introduction to functions and working with strings
 *         File: main.cpp
 *
 *      SPDX-FileCopyrightText: © 2024 [Your Name] <[yourEmail@hightechhigh.org]>
 */

#include <iostream>

using namespace std;  // avoid std:: prefixes

int main()  {

    string hthnc = "High Tech High North County";
    cout << hthnc.length() << endl;
    
    cout << hthnc[15] << hthnc[16] << hthnc[17] << hthnc[18] << hthnc[19] << hthnc[20] << hthnc[21] << hthnc[22] << hthnc[23] << hthnc[24] << hthnc[25] << hthnc[26] << hthnc[27] << endl;
    
    hthnc[0] = 'Z';
    cout << hthnc << endl;
    
    cout << hthnc.find("Tech", 0)  << endl;
    
    cout << hthnc.substr(15, 27) << endl;

    return 0;
}
