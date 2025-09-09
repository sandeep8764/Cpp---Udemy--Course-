#include<iostream>
using namespace std ;
// Introduction to oops 

// Writting a class

class Reactangle 
{
    private :
    // Data 
    // Function ->operation on data 
    int length ;
    int breadth ;
    
    public:
    void setlength(int l)
    {
        if(l<0) length=1;
        else 
     length =l;
        
    }
    void setbreadth(int b)
    {
        if(b<0) breadth=1;
        else 
     breadth =b;
        
    }
    int getlength()
    {
        return length;
        
    }
    int getbreadth()
    {
        return breadth;
        
    }
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
    
    Reactangle r1;
     //Reactangle r1,r2,r3,r4; // these are object of type class Reacangle 
    
    // r1,r2,r3,r4  these are variable of type class reactangle 
   // r1.length=10; // due to private 
   // r1.breadth=5; // now we cannot access the parameter 
   r1.setlength(10);
   r1.setbreadth(-5);
   
   cout<< " Area of trainalge is="<<r1.area()<<endl;
   
    cout<< " perimeter of trainalge is="<<r1.perimeter()<<endl;
    
    cout<< " length of traunagle :"<< r1.getlength()<< endl;
    
    
    return 0;
    
}