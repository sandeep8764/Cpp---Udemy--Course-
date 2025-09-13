#include<iostream>
using namespace std ;

class Base 
{
    public:
    void fun1(){ cout << " fun1 of base :"<< endl;};
    void fun2();
    
};
class Derived :public Base 
{
    public:
    void fun4(){cout<< " fun4 from derived class:"<< endl;};
    void fun5();
    
    
};


int main ()
{
//     Derived d;
//     Base *ptr=&d;
    
//     ptr->fun2(); // only of Base class function are called 
//    // ptr->fun4();// not in base calss 


Base b;
//Derived *ptr=&b;// we cant do this 


// ptr->fun1();


    
    return 0;
    
}