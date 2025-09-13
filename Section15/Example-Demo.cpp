#include<iostream>
using namespace std ;

class Rectangle 
{
    public:
    void area ()
    {
        cout<< " Area of rectangle :"<< endl;
        
    }
    
};
class Cuboid :public Rectangle
{
    public:
    void Volume()
    {
        cout<< " Volume of Cuboid:"<< endl;
        
    }
    
};



int main ()
{

    
    Cuboid c;
    
    Rectangle *ptr=&c;
    
    // c.area();
    // c.Volume();
    ptr->area();
   // ptr->Volume();
    
    


    
    return 0;
    
}