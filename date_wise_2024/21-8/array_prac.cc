#include <iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    /* Basic Operations */
    int arr[] = {1, 4, 2, 3, 5};

    array<int, 6> ar = {1, 2, 3, 4, 5, 6};
    // for (auto it : arr) {
    //     cout<<it;
    // }

    // int &i = ar.front();

    sort(arr, arr + 5, greater<int>());

    for (auto it : arr) {
        cout << it;
    }
    cout << endl;

    swap(arr[0], arr[3]);

    for (auto it : arr) {
        cout << it;
    }
    cout << endl;
    cout << *find(arr, arr + 5, 3);
    int arr2[3];
    copy(arr, arr + 4, arr2);
    cout<<endl;
    cout<<"*********";
    for (auto it : arr) {
        cout << it;
    }
    return 0;
}