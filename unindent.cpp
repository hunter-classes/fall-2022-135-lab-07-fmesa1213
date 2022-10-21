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
while(getline(cin, line)) {
cout << removeLeadingSpaces(line) << endl;
}
return 0;
}

string removeLeadingSpaces(string line)
{
string result = "";
bool check = true;
for(int i = 0; i < line.size(); ++i) 
{
if(!(check && isspace(line[i]))) 
{
result += line[i];
check = false;
}
}
return result;
}
