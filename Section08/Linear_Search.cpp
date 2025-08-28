#include<iostream>
using namespace std ;
int main ()
{
    int A[10];
    int n=10;
    cout<< " Enter the Array Element:"<< endl;
    for (int i=0;i<n;i++)
    {
        cin>> A[i];
        
    }
    int key;
    
    cout<< " Enter the Key element:";
    cin>> key ;
    
    // Linear Seach 
    for (int i=0;i<n;i++)
    {
        if(key==A[i]) cout<< "Element is found at :"<<i<< endl;
        
        
        
    }
     
    
    
    return 0;
    
}