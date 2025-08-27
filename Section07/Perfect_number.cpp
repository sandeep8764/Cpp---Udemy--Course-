#include<iostream>
using namespace std ;

int main ()
{
    
    int n;
    int sum;
    cout<< " Enter the value of n:";
    cin>> n;
    for(int i=1;i<n;i++)
    {
       if(n%i==0)
       {
        sum+=i;
        
       }
    }
    if(sum==n)
    {
        cout<< " Number is Perfect number "<< n<< endl;
        
    }
    else 
    cout<< " Not A perfect number "<<n<< endl;
    
    return 0;
    
}
