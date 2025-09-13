#include<iostream>
using namespace std ;

class Basiccar 
{
    public:
    void start()
    {
        cout<< " Car Started :"<< endl;
        
    }
   
    
};
class Advanced :public Basiccar
{
    public:
    void playmusic()
    {
        cout<< " play music :"<< endl;
        
    }
    
    
};



int main ()
{

    
    Advanced A;
    Basiccar *ptr=&A;
    
    // A.start();
    // A.playmusic();
    
    ptr->start();
    //ptr->playmusic();
    
    


    
    return 0;
    
}