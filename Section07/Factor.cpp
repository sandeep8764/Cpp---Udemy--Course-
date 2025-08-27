#include<iostream>
using namespace std ;

int main ()
{
    
    int n;
    cout<< " Enter the value of n:";
    cin>> n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<< "Factor of number is "<< i<< endl;
            
        }
    }
    return 0;
    
}
