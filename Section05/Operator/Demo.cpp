#include<iostream>
using namespace std ;
int main ()
{
    int x=10,y1,y;
    y=++x;  // First increament then store in y 
    y1=x++; // first store and then increament 
    cout<< " Value of y :"<< y<<endl;
     
    return 0;
     
}