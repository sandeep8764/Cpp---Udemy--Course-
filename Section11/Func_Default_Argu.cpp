#include<iostream>

using namespace std ;

// Function Default argument 

int add (int x, int y , int z=0)
{
    return x+y+z;
    
}

int  main()
 {
    
    // Function calling 

    int c=add(1,2);
    cout<< " Using default argument Sum :"<<c<< endl;
    
     cout<< " Using default argument Sum :"<<add(1,2,3)<< endl;
    return 0;
    
 }