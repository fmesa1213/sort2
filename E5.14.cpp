/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E5.14

I wrote a function that swaps the values of a and b if a is greater than b and otherwise leaves a and b unchanged.

*/


#include <iostream>
using namespace std;
void sort2(int& a, int& b)

{
if(a > b)
{

int temp;
temp = a;
a = b;
b = temp;

}
}

int main() {

int u = 2;
int v = 3;
int w = 4;
int x = 1;

sort2(u, v);
sort2(w, x);

cout<<"u = "<<u<<endl;
cout<<"v = "<<v<<endl;
cout<<"w = "<<w<<endl;
cout<<"x = "<<x<<endl;

return 0;

}
