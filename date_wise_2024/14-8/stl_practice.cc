#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    // pair<int, int> pt(1,3);

    // cout<<pt.first<<" "<<pt.second<<endl;

    // vector<int> vec;

    // vec.push_back(20);
    // vec.push_back(30);

    // for(int i = 0; i< vec.size();i++) {
    //     cout<<vec[i]<<" ";
    // }
    // // int capacity =(int) vec.capacity();
    // cout<<vec.size()<<endl;

    std::vector<int> myvector;

    // set some content in the vector:
    for (int i = 0; i < 100; i++)
        myvector.push_back(i);

    // myvector.shrink_to_fit();

    std::cout << "size: " << (int)myvector.size() << '\n';
    std::cout << "capacity: " << (int)myvector.capacity() << '\n';
    std::cout << "max_size: " << (int)myvector.max_size() << '\n';
    return 0;
    return 0;
}