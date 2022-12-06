/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 7 B
Here, I wrote a program that enhances the program from the previous task. As it reads the input line by line, it should also count the number of open
and closed { } in it, and keep track of how many blocks is currently open at the beginning of each line.
*/

//cool code!

#include <iostream>
#include <string>
using namespace std;
int countChar(string line, char c);
int main()
{

string s("int main(){for(int i=0;i<5;i++)}");

cout <<"Opening brace count is "<< countChar(s,'{')<<endl;
cout <<"Closing brace count is " << countChar(s,'}')<<endl;

return 0;
}


int countChar(string line, char c)
{
int Count = 0;

for (int i = 0; i < line.size(); i++)
{
if (line.at(i) == c)
Count++;
}

return Count;

}
