#include<iostream>

using namespace std ;
// reccursive function 

void Fun(int n )
{
    if(n>0)
    { Fun(n-1); // During returning time value print 
        cout<< n<< endl;
        //Fun(n-1);  // First Print and then call function 
        
    }
}

int main ()
{
   int x=10;
   Fun(x);
   
    return 0;
    
}