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
    
    //Reactangle r1,r2,r3,r4; // these are object of type class Reacangle 
    
    // r1,r2,r3,r4  these are variable of type class reactangle 
    
    // Define pointer to object 
    Reactangle *p=new Reactangle();// its directly use memory in heap 
    
    //p=&r1;
   // p=new Reactangle();
    // For access data we use arrow operator 
    p->length=10;
    p->breadth=5;
    cout<< " Area of reactangle :"<< p->area()<<endl;
    
    
    
   
    return 0;
    
}