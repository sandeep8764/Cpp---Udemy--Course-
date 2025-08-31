#include<iostream>
#include<cstring>
using namespace std ;

int main ()
{
    char S1[20]="programming";
    char S2[20]="gram";
    char s3[20]="m";
    char s4[20]="k";
    char s8[20]="hello";
    char s9[20]="hello";
    
    
    
    cout<< "String compare :"<<strstr(S1,S2)<<endl;
    cout<< "String compare :"<<strstr(S1,s3)<<endl;
   // cout<< "String compare :"<<strstr(S1,s4)<<endl;
    
    
    cout<< "string occurence :"<< strchr(S1,'m')<<endl;
    // String comparison 
    
    cout<< "Dictionay order :"<<strcmp(s8,s9)<<endl;
    
    
    return 0;
    
}