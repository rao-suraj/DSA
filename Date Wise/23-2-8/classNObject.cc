#include <iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    void init()
    {
        cout<<"Enter the length and breadth"<<endl;
        cin>>length>>breadth;
    }
    void display()
    {
        cout<<"Area of the rectangle is ="<<length*breadth<<endl;
    }
};

int
main()
{
    rectangle r;
    r.init();
    r.display();
    return 0;
}