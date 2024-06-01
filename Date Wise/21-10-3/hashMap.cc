// #include<iostream>
// #include<unsorted.set>

// using namespace std;

// int main()
// {
//     unsorted.set<int> s;
//     s.insert(5);
//     s.insert(10);
//     s.insert(7);
//     if(s.find(5)==s.end())
//     {
//         cout<<"Not Found"<<endl;
//     }
//     else
//     {
//         cout<<"Found"<<endl;
//     }
//     for(auto it=s.begin();it!=s.end();it++)
//     {
//         cout<<(*it)<<" ";
//     }
//     s.clear();
//     cout<<s.size();
//     cout<<s.count(10);  /*returns 1 or 0*/
//     s.erase(10);
//     s.erase(s.begin(),s.end());
//     return 0;
// }
#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> map;
    pair<string,int> p("AbC",1);
    map.insert(p);
    map["abc"]=4;

    cout<<map.at("abc")<<endl;
    cout<<map.at("AbC")<<endl;

    // cout<<map.at("de");
    // cout<<map.size()<<endl;
    // map["de"];   /*It will insert 0*/
    // cout<<map.size();
    // check present
    // map.erase();
    // if(map.count("de")>0)
    // {
    //     cout<<"Present";
    // }
    return 0;
}