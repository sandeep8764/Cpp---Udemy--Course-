#include<iostream>
#include<cstring>
using namespace std ;


int main ()
{
    char s1[20]="12345"; // String type 
    char s2[29]="23.45";
    
   long int x=strtol(s1,nullptr,10);
   float y=strtof(s2,nullptr);
   cout<<x+20<<endl; // ouput is long interher type 
   
   cout<<y-0.20<<endl;
   
   char s5[20]="x=10;y=20;z=30";
   //cout<<strtok(s5,"=;")<<endl;
   char *token=strtok(s5,"=;");
   
   
    while(token!=nullptr)
    {
   // cout<<token<<endl;
    }
    
   
   
   
   
    
    return 0;
    
}