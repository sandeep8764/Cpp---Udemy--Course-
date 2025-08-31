#include<iostream>
#include<string>

using namespace std ;
int main ()
{
    // various function in string 
    string str;
    cout<< " Enter the value of str:";
    getline(cin,str);
    
    cout<< str.append(" world" )<<endl; // Add The End of String 
    cout<< str.insert(3,"kk")<<endl;
    
    
    
    return 0;
    
}