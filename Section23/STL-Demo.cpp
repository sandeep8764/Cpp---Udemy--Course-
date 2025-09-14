#include<iostream>
#include<vector>
using namespace std ;
// Introduction to STL 



int main ()
{
    vector <int> v={11,22,33,44};
    v.push_back(55);
    v.pop_back();
    
    
    // for(int x:v) // Range Based loop in c++ 11 version or Higher version only 
    // {
    //     cout<< x<< endl;
        
    // }
     vector<int> :: iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<< ++*itr<< endl;// itr is a pointer for vector element 
        
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i]<< endl;
        
    }
    // now for list simply use list inplace of vector 
    
    return 0;
    
}