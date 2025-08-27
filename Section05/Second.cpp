#include<iostream>
using namespace std ;
int main ()
{
    
    string Name ;
    cout<< " May i know your name :";
    // cin>> Name;
    getline(cin,Name);
    
    cout<< " Welcome mr./mrs."<< Name << endl;
     
    cout<< endl;
     
    
    return 0;
     
}