// CodingStrings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // Input and Output library
#include <string> //employ string text 
using namespace std; //used to create limited coding with std 

int main()
{
   string lastName;
   string firstName;
   
   cout << "What is your first name? \n";
   cin >> firstName;
   cout << "What if your last name? \n";
   cin >> lastName;
   cout << "Your name is " << firstName <<" "<< lastName << ".\n";

   system("pause");
    return 0;
}

