#include<iostream>
using namespace std ;

class Rectangle 
{
    private:
    // Data member 
    int length ;
    int breadth ;
    
    public:
    // Member function 
    
    void setlength (int l) {  l>0 ?length=l:length=0 ;} // ternary opeartor 
    void setbreadth (int b) { b>0 ?breadth=b: breadth=0;}
    
    
    int getlength(){ return  length;}
    int getbreadth (){ return breadth;}
    
    
    
    
    int area ()
    {
        return length*breadth;
        
    }
    int perimeter ()
    {
        return 2*(length+breadth);
        
    }
    
};


int main ()
{
    Rectangle r1;
    // r1.length=10;// these are private so we cannot access them directly 
    // r1.breadth=5;
    
    r1.setlength(10);
    r1.setbreadth(-5);
    
    cout<< r1.area()<< endl;
    
    
    return 0;
    
}