/*
    Exercise 2.2
    -------------------------
    Write a program that produces the following output:
        There are 60 seconds in a minute.
        There are XXX seconds in an hour.
        There are YYY seconds in a day.
        There are ZZZ seconds in a year.
    In place of XXX, YYY and ZZZ, the program should calculate and display the appropriate number of seconds.
*/
#include <iostream>

using namespace std;

int main()
{
   cout <<  "There are 60 seconds in a minute." << endl;
   cout <<  "There are " << 60 * 60 << " seconds in an hour." << endl;
   cout <<  "There are " << 60 * 60 * 24 << " seconds in a day." << endl;
   cout <<  "There are " << 60 * 60 * 24 * 365 << " seconds in a year." << endl;

   // Return code number
   return 0;
}