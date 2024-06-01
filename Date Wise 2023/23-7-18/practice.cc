#include <iostream>

using namespace std;

class nothingDone
{
    static int valOfNothing;

public:
    void incNothing()
    {
        valOfNothing++;
    }
    void displayNothing(){
        cout<<valOfNothing<<endl;
    }
};

int nothingDone :: valOfNothing=3;

main()
{
    nothingDone suraj,Raj;
    
    suraj.incNothing();
    suraj.displayNothing();

    Raj.incNothing();
    Raj.displayNothing();

    
    return 0;
}