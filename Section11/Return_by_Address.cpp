#include<iostream>

using namespace std ;

// Function Creating 

int * Fun(int size )
{
    int *p=new int[size];
    for(int i=0;i<size;i++)
    {
        cout<< (p[i]=i+1)<<endl;
        
        
    }
    cout<< p<<endl;
    
    return p;
   
}


int  main()
 {
    int * ptr=Fun(5); // it will strore address of pointer p
    
  
    cout<< ptr<<endl;
    
    delete []ptr;   // ✅ free memory here in main
    return 0;
    
 }