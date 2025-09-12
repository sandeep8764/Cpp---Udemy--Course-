#include<iostream>
using namespace std ;
// Introduction to Inheritance 

class Base 
{
    public:
    int x;
    void Display ()
    {
        cout<< " Display the Base  "<< endl;
        
    }
    
};

class Derived : public Base 
{
    public:
     void Show ()
     {
        cout<< " Derived Display "<< endl;
    
     }
    
};


int main ()
{
    Base b;
    b.Display();
    
    Derived d; // Derived class from base class
    
    d.Show();
    
    
    
    return 0;
    
}