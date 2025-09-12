#include<iostream>
using namespace std ;

// Ways of Inheritance 

class Parent 
{
    private: int a;
    protected: int b;
    public: int c;
    
    
    void funparent()
    {
        a=10;
        b=15;
        c=20;
        
    }
    
    
};

class child : public Parent
{
    public:
    void funchild()
    {
        //a=10; // it is private in parent 
        b=15;
        c=20;
        
    }
    
};

class Grandchild : public Parent
{
    public:
    void funcgrandchild()
    {
        //a=10; // it is private in parent 
        b=15;
        c=20;
        
    }
    
};




int main ()
{
    child c;
    // c.a=10;
    // c.b=20;
    // c.c=28;
    
    return 0;
    
}