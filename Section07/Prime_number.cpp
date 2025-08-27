#include<iostream>
using namespace std ;

int main ()
{
    int n ;
    cout<< " Enter the value of n:";
    cin>> n;
    int count=0;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        
        count++;
        }
        
        
        
        
    }
    if(count==2)
    {
        cout<< " Not a prime number "<< n<< endl;
        
        
    }
    else 
          cout<< " Prime number "<< n<< endl;
          cout<< " Total Factor is "<< count<< endl;
          
    
    return 0;
    
}