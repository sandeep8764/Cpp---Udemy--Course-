#include<iostream>
#include<string.h> //<cstring>


using namespace std ;
int main ()
{
    char S[50]="Sandeep yadav";
    cout<<strlen(S)<<endl;
    
    char *S2;
    cout<< " Enter your name :";
    cin.getline(S2,100);
    cout<< " length :"<< strlen(S2)<<endl;
    
    
    
    return 0;
    
}