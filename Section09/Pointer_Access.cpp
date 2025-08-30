#include<iostream>
using namespace std ;
int main ()
{
    
    int *p=new int [5];
    p[0]=12;
     p[1]=120;
      p[2]=102;
       p[3]=112;
        p[4]=122;
        
        cout<< p[1]<<endl;
        
    
    delete []p;
    p=nullptr;// Nomore p is pointing to heap memory 
    
    
    return 0;
    
}
