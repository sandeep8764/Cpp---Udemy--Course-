#include<iostream>
#include<string>
using namespace std ;

int main ()
{
    string str="TODAY";
    
    string :: iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        //cout<< *it<<endl;// Derefrencing 
        *it=*it+32;
        
        
        
    }
    cout<< str<<endl;
    
    return 0;
    
}