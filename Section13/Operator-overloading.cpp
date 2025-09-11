#include<iostream>
using namespace std ;

class Complex
{
    private :
    int real ;
    int imaginary ;
    
    public:
    
    Complex (int r=0,int i=0)
    {
        real =r;
        imaginary=i;
        
    }
//     Complex operator+ (Complex x)
// {
//     Complex temp;
    
//     temp.real=real+x.real;
//     temp.imaginary=imaginary+x.imaginary;
    
//     return temp;
    
// }
friend Complex operator+ (Complex c1,Complex c2);
void display() 
    {
        cout << real << " + " << imaginary << "i";
    }
    
};
 Complex operator+ (Complex c1,Complex c2)
{
    Complex temp;
    
    temp.real=c1.real+c2.real;
    temp.imaginary=c1.imaginary+c2.imaginary;
    
    return temp;
    
}


int main ()
{
    Complex c1(2,4);
    Complex c2(1,5);
    Complex c3=c1+c2;
    cout<< " Sum of two Complex number is :";
    
   c3.display(); // insertion operator overloading 
   
   cout<< endl;
   
    
    
    
    return 0;
    
}