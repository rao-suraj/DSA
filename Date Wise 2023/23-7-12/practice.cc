#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cout << "Enter the choice " << endl;
    // cin >> n;
    // switch (n)
    // {
    // case 1:
    //     cout << "You selected 1";
    //     break;
    // case 2:
    //     cout<<"You selected 2";
    //     break;
    // default:
    //     cout<<"Envalid selection";
    // }

    // int i=1;
    // do{
    //     cout<<i;
    //     i++;
    // }while (i!=1 & i!=3);

    // int a=10;
    // int *pt=&a;
    // cout<<a<<" "<<*pt;
    // cout<<endl;
    // cout<<pt<<endl;

    // int ** ptt=&pt;
    // cout<<ptt<<"  "<<&pt<<endl;
    // cout<<*ptt<<endl;
    // cout<<**ptt;

    int arr[]={1,2,3,4,5,6};
    int *pt=arr;
    for(int i=0;i<6;i++)
    {
        cout<<pt+i<<"  "<<*(pt+i)<<endl;//It gets incremented by fore bytes.If it was a char it would have been incremented by 1byte
    }
    return 0;
}