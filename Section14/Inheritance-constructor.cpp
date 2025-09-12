#include<iostream>
using namespace std ;
// Constructor in Inheritance 
class Base 
{
    public:
    
    Base(){ cout<< " Non para bases"<< endl;}
    Base(int x){ cout<< "  para bases"<< x<< endl;}
    
};

class Derived : public Base
{
    public:
    Derived(){ cout<< " Non para Derived :"<< endl;}
     Derived(int a){ cout<< "  para Derived :"<< a<< endl;}
    
};







int main ()
{
    Derived d(50);
    
    
    
    return 0;
    
}