#include<iostream>

using namespace std ;

// Function Creating 
// Globally variable 

int g=0; // Globall variable can use anywhere 

void fun()
{
    int a=15; // Locall variables ony use here 
    g=g+a;
    cout<< g<<endl; // output 30
    
    
}


int  main()
 {
    cout<< g<< endl;
    // Function calling 
   
    g=15;
    fun();
    cout<< g<< endl;
    g++;
    cout<< g<< endl; // output 31
    
    
    return 0;
    
 }