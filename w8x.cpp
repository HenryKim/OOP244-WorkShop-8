
 // Workshop 8 - Derived Classes With Resources
 // w8x.cpp

 #include <iostream>
 using namespace std;
 #include "w8x.h"
 #include "IntlPhoneNumberWS.h"

 int main( ) {
     int  i, n;
     bool keepreading = true;
     IntlPhoneNumberWS no, number[MAX_NUMBERS];

     cout << "Telephone List" << endl;
     cout << "==============" << endl;
     n = 0;
     do {
         cin >> no;
         if (no.valid())
             number[n++] = no;
         else
             keepreading = false;
     } while (keepreading && n < MAX_NUMBERS);

     cout << endl;
     for (i = 0; i < n; i++) {
         number[i].display();
         cout << endl;
     }
 }