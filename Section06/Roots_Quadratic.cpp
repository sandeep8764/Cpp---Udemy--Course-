#include<iostream>
#include<cmath>
using namespace std ;


int main ()
{
    int a, b, c;
    cout<< " Coefficinets of Equation:"<< endl;
    cout<< " Enter the value of a:";
    cin>>a;
    cout<< " Enter the value of b:";
    cin>>b;
    cout<< " Enter the value of c:";
    cin>>c;
    
    double D=sqrt(b*b-4*a*c);
    
    if(D>0)
    {
        cout<< " Roots are Real and Unequal "<< endl;
        
    }
    else if (D==0)
    {
        cout<< " Roots are Equal and Real "<< endl;
        
        
    }
    else 
    cout<< " Roots are Imaginary "<<endl;
    
    
    
    return 0;
    
}