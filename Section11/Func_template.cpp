#include<iostream>

using namespace std ;

// Function Template 
template <class t>
t Max( t x, t y)
{
    if(x>y) return x;
    else return y;
    
}


int  main()
 {
    
    // Function calling 
   cout<< " maximium of two number :"<< max(12,23)<<endl;
    cout<< " maximium of two number :"<< max(12.34,23.78)<<endl;
    
    return 0;
    
 }