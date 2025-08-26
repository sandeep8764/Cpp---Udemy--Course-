#include<iostream>
using namespace std ;

int main ()
{
    float a,b,c;
    cout<< " Enter the value of a:";
    cin>>a;
    
     cout<< " Enter the value of b:";
    cin>>b;
    
     cout<< " Enter the value of c:";
    cin>>c;
    
    if(a>b & a>c)
{
    cout<< a;
    
}
else if(b>c)
{
    cout<< b;
    
}
else 
cout<<c;
    
    
    
    
    
    return 0;
    
}