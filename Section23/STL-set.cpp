#include<iostream>
#include<set>
using namespace std ;
// Introduction to STL 



int main ()
{
set<int> v={11,22,33,44};
    v.insert(55);
    v.insert(78);
    
    
    // for(int x:v) // Range Based loop in c++ 11 version or Higher version only 
    // {
    //     cout<< x<< endl;
        
    // }
     set<int> :: iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<< *itr<< endl;// itr is a pointer for vector element 
        
    }
    
    
    // now for list simply use list inplace of vector 
    
    return 0;
    
}