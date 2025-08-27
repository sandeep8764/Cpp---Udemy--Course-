#include<iostream>
using namespace std ;

// Uses cases of Enum 
enum Days {Mon=1 , Tues, Wed , Thur=20 , Fri, Sat , Sun};
enum Department {CSE , ECE , ME , EEE};

// Use cases of Typedef 

typedef int Marks ;
typedef int Rollno;


int main ()
{
    Days d;
   
    d= Mon;
    cout<<" value assign to monday :"<< d<<endl;
    cout<<" value assign to Tuesday  :"<< Tues<<endl;
    cout<<" value assign to saturday :"<< Sat<<endl;
     
    // cout<< " Value Assign to Saturday :"<< d<< endl;
     
    Marks M1,M2,M3;
    Rollno R1, R2, R3;
    
    return 0;
     
}