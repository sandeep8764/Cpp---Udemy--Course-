#include<iostream>
using namespace std ;
int main ()

{
    int Array[]={11,22,33,44,55,66,77}; // Array is Declaration and initailized 
    float Array1[]={1.2f,3.4f,56};
    
    
    
    // for(int i=0; i<7;i++)
    // {
    //     cout<< Array[i]<< endl;
        
    // }
   for (int x:Array) cout<< x<< endl;
   for(float x:Array1) cout<< x<< endl;
   
   for(auto x:Array1) cout<< x<< endl; // use auto when we don,t lkonw the type of array  Also called as uses of For each loop
   
   
   
   
    
     return 0;
      
}