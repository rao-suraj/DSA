#include <iostream>

/* For multiple parameter use
    Template<class T1, class T2>
    Use it in the class                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    During calling use class<int,float> classname;    
*/

using namespace std;

template<class T> //Specifie it here and use it where ever you want.
class vector
{
public:
    T *arr;
    int size;
    vector(int size)
    {
        this->size=size;
        arr = new T[size];
    }
    T dot(vector v1)
    {
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+= this->arr[i] * v1.arr[i];
        }
        return d;
    }
};

int main()
{
    // For int 
    // vector<int> v1(3);
    // vector <int> v2(3);
    // v1.arr[0]=1;
    // v1.arr[1]=2;
    // v1.arr[2]=4;

    // v2.arr[0]=1;
    // v2.arr[1]=3;
    // v2.arr[2]=6;

    // int dotProduct=v1.dot(v2);
    // cout<<dotProduct;

    vector<float> v1(3);
    vector <float> v2(3);
    v1.arr[0]=1.1;
    v1.arr[1]=2.0;
    v1.arr[2]=4.5;
    v2.arr[0]=1;
    v2.arr[1]=3.9;
    v2.arr[2]=6;

    int dotProduct=v1.dot(v2);
    cout<<dotProduct;

    return 0;
}