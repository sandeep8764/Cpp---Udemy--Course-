#include<iostream>
#include<cmath>
using namespace std ;
 

int main ()
{
    cout<< " Enter the Coefficient of Equation:"<< endl;
    double a,b,c,Root1,Root2;
    cout<< " Enter the value of a:";
    cin>> a;
    cout<< " Enter the value of b:";
    cin>> b;
    cout<< " Enter the value of c:";
    cin>> c;
    Root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    Root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<< " Root of Quadratic equation :"<< Root1 << endl;
    cout<< " Root of Quadratic equation :"<< Root2 << endl;
    
    
    return 0;
     
}