#include<iostream>
using namespace  std ;

int main()
{
    int sum=0;
    
    int A[]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++)
    {
        //sum=sum+A[i];
        sum+=A[i];
        
        
    }
    cout<< sum<< endl;
    
    
    
    
    
    return 0;
    
}

