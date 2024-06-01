// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_set<int> stt;
//         int st=0,ed=0,length=0,mxlength=0;
//         while(ed < s.size()) {
//             if(stt.find(s[ed])==stt.end()) {
//                 stt.insert(s[ed]);
//                 ed++;
//                 length++;
//             } else {
//                 while(s[st] != s[ed]) {
//                     stt.erase(s[st]);
//                     st++;   
//                 }
//                 st++;
//                 ed++;
//                 length=ed-st;
//             }
//             mxlength=max(mxlength,length);
//         }
//         return mxlength;
//     }
// };

#include<iostream>

using namespace std;

int main()
{
    string s="aaaaaaa";

        int i=0,j=0,n=s.size(),cnt[128]={},ans=0;
        while(j<n)
        {
            ans+=++cnt[s[j++]]==2;
            if(ans) ans-=--cnt[s[i++]]==1;
            cout<<"I ="<<i<<"j="<<j<<endl;
        }
        cout<< j-i;
    return 0;
}