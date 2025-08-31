#include<iostream>

using namespace std ;

// Function Creating 

int  Max (int x,int y , int z)
{
    if (x>y && x>z) return x;
    else if (y>z)return y;
    
    else return z;
    
    
    
    
}
int  main()
 {
    
    // Function calling 
   int a=10 ,b=20, c=89;
   
   cout<< " final result is :"<< Max(a,b,c)<<endl;
   
    
    return 0;
    
 }