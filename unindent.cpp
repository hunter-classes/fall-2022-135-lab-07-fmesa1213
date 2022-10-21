/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 7 A

Here, I wrote a program that reads input from cin and prints out each input line with leading spaces removed.
*/

#include <iostream>
#include <string>
using namespace std;
string removeLeadingSpaces(string line);

int main()
{
string line;
while(!cin.eof())
{
getline(cin, line);
cout<<removeLeadingSpaces(line)<<endl;
}
return 0;
}

string removeLeadingSpaces(string line)
{
int ind = 0;
while(isspace(line[ind]))
ind++;
return line.substr(ind);
}
