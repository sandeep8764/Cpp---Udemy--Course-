#include<iostream>
using namespace std ;

int main ()
{
    int n;
    cout<< " enter the value of n ";
    cin>>n;
    while(n>0)
    {
        int r=n%10;
           n=n/10;
           cout<< " "<<r<<endl;
        
    }
    
    
    return 0;
     
}
