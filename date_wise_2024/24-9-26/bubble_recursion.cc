#include <bits/stdc++.h>

using namespace std;

void bubbleRecursion(int arr[], int i, int j)
{
    if (i < j)
    {
        while (i < j)
        {
            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
            i++;
        }
        bubbleRecursion(arr, 0, j - 1);
    }
    return;
}

int main()
{

    int arr[] = {4, 3, 1, 5};

    bubbleRecursion(arr, 0, 3);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}