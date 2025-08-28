#include<iostream>
using namespace std ;

int main()
{
    int A[2][3]={1,2,3,6,7,8};
    int B[2][3]={4,5,6,1,2,3};
    cout<< " Array Representation:"<< endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<< " ";
            
        }
        cout<< endl;
        
    }
    cout<< " Addition of 2D Array:"<<endl;
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]+B[i][j]<< " ";
            
        }
        cout<< endl;
        
    }
    
    return 0;
    
}