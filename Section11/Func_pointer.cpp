#include<iostream>
using namespace std ;

// Function pointer 

int Max(int x,int y )
{
    return x>y? x:y;
    
}
int min(int x,int y )
{
    return x<y? x:y;
    
}


int main ()
{
    int (*fp) (int ,int );
    fp=Max;
    cout<< "Max :"<<(*fp)(10,3)<<endl ;
     fp=min;
      cout<< "min :"<<(*fp)(10,3)<<endl ;
       
    return 0;
    
}