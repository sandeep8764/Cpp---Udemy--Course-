#include<iostream>
using namespace std ;
int main ()
{
    int sum =0;
    int n;
    
    cout<< " Enter the value of n :";
    cin>> n;
    for(int i=1;i<=n;i++)
    {
       
        
        sum +=i;
        
        
    }
    cout<< " Sum of n natural number is :"<< sum<< endl;
     
    return 0;
    
}