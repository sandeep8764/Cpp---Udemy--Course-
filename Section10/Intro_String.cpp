#include<iostream>
using namespace std ;
int main ()
{
    char x='A';
    char S[10]="Hello";
    char S1[]="Hello";
    //char S2={'H','E','L','L','o','\0'};
    
   // string *S3="Hello"; 
    
    cout<< x<<endl;
    cout<<S<<endl;
    cout<<S1<<endl;
    
    char C[20];
    cout<<" Enter the Name :";
    //cin>>C;
    //cout<< C;
    cin.get(C,20); //cin.getline(C,50)
    cout<< C;
    
    
    
    
    
    
    return 0;
    
}