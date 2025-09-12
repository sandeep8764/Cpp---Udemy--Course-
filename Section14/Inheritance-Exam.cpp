#include<iostream>
using namespace std ;
// Introduction to Inheritance 

class Rectangle 
{
    private:
    int length ;
    int breadth ;
    
    public:
    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
        
    }
    
    int getlength(){return length; }
    int getBreadth(){ return breadth ;}
    
    void setlength(int l) { length=l;}
    void setbreadth(int b) { breadth=b;}
    
    int area (){return length*breadth ;}
    int perimeter(){ return 2*(length+breadth);}
    
    
    
    
    
    
};

class Cuboid  : public Rectangle
{
    private:
    int Height ;
    
    public:
    // Constructor → initialize base class too
    Cuboid(int l=0, int b=0, int h=0) : Rectangle(l, b) {
        Height = h;
    }
    // Cuboid (int h)
    // {
    //     Height=h;
        
    // }
    int getheight(){ return Height;}
    void setheight(int h){ Height=h;}
    int volume () 
    {
        return getlength()*getBreadth()* Height;
        
    }
    
    
};



int main ()
{
    Rectangle r(10, 5);
    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Rectangle Perimeter: " << r.perimeter() << endl;

    Cuboid c(10, 5, 3);
    cout << "Cuboid Volume: " << c.volume() << endl;

    
    
    
    return 0;
    
}