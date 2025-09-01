#include<iostream>

using namespace std ;

// Static variable 
//int v=0;

void fun()
{
   static int v=0; // Static variable similar to that of globall variable 
    int a=10;
    v++;
    cout<< a<< " "<< v<< endl;
    
}
int main ()
{
    
    fun();
     fun();
      fun();
    
    return 0;
    
}