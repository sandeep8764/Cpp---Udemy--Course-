#include<iostream>
using namespace std ;
 

int main ()
{
    cout<< " Enter the parameter of body  :"<<endl;
    double v,u,a,Distance;
    cout<< " Enter the v :";
    cin>>v;
    cout<< " Enter the u :";
    cin>>u;
    cout<< " Enter the a :";
    cin>>a;
    Distance=(v*v-u*u)/(2*a);
    cout<< " Final Distance :"<<Distance<<endl;
     
    
    
    
     return 0;
      
}