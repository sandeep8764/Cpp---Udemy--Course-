#include<iostream>

using namespace std ;

// Function Creating 

void Swap (int a,int b)
{
    cout<< a<< " "<<b<< endl;
    int temp=a;
    a=b;
    b=temp;
     cout<< a<< " "<<b<< endl;
    
    
}
int  main()
 {
    int x=10,y=20;
    // Function calling 
   Swap(x,y);
   cout<< x<< "  "<< y<< endl;
   
    
    return 0;
    
 }