#include<iostream>
using namespace std ;
// Introduction to oops 

// Writting a class

class Reactangle 
{
    public:
    // Data 
    // Function ->operation on data 
    int length ;
    int breadth ;
    
    
    int area ()
    {
        return length*breadth;
        
    }
    int perimeter()
    {
        return 2*(length+breadth);
        
    }
    
};


int main ()
{
    
    Reactangle r1,r2,r3,r4; // these are object of type class Reacangle 
    
    // r1,r2,r3,r4  these are variable of type class reactangle 
    
    r1.length=10;
    r1.breadth=5;
    cout<< " Area of r1 object is :"<< r1.area()<<endl;
    cout<< " perimeter of r1 object is :"<< r1.perimeter()<<endl;
    
    return 0;
    
}