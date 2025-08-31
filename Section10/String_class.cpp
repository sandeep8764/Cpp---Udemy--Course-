#include<iostream>
//#include<cstring>
#include<string>

using namespace std ;

int main ()
{
    // Class String in c++
     string str; //str object of type string 
     //cin>> str; // it will take only one word 
     //cout<< " Enter the String :";
     
     //getline(cin,str); // globall function to take mltiple word 
     
    // cout<< str<<endl;
     
     // Various inbuilt function use 
     
     string s;
     cout<<" Enter the value of s :";
     getline(cin,s);
     
     cout<< " Size or length of String :"<<s.length()<<endl;// Depending on obejct Inbuit function is called 
     cout<< " Capacity of object s:"<<s.capacity()<<endl;
     
     
     
     
    
    
    return 0;
    
}