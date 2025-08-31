#include<iostream>
#include<cstring>
using namespace std ;

int main ()
{
    
    char s1[20]="good";
    char s2[20]="morning ";
    char s3[]="";
    
    
    cout<< "String concatenation:"<<strcat(s1,s2)<<endl;
     cout<< "String concatenation:"<<strncat(s1,s2,5)<<endl;
     
     //String copy 
     
     cout<<"String copy :"<<strcpy(s3,s2)<<endl;
      cout<<"String copy :"<<strncpy(s3,s2,4)<<endl;
     
    
    
    
    return 0;
    
}
