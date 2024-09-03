#include<iostream>
#include<vector>

using namespace std;

int main() {

    /* Spirally traversing a matrix */ 

    // GFG solution.
    //     vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
    //     vector<int> result;
    //     int top=0;
    //     int bottom=matrix.size()-1;
    //     int right=matrix[0].size()-1;
    //     int left=0;
        
    //     if(matrix.size()==0 && matrix[0].size()==0) {
    //         return result;
    //     }
        
    //     while(top<= bottom && left<=right) {
    //         for(int i=left ; i<=right ; i++) {
    //             result.push_back(matrix[top][i]);
    //         }
    //         top++;
            
    //         for(int i=top;i<=bottom;i++) {
    //             result.push_back(matrix[i][right]);
    //         }
    //         right--;
            
    //         if(top <= bottom) {
    //             for(int i=right ; i>=left ; i--) {
    //                 result.push_back(matrix[bottom][i]);
    //             }
    //             bottom--;
    //         }
            
    //         if(left<= right) {
    //             for(int i=bottom;i>=top;i--) {
    //                 result.push_back(matrix[i][left]);
    //             }
    //             left ++;
    //         }
    //     }
    //     return result;
    // }

    /* Store an matrix wiht 0 as values*/

    // vector<vector<int>> vec(5,vector<int>(5,0));

    // for(auto it: vec) {
    //     for(auto i:it) {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    /* A Little simple method */
    //    vector<int> v;
    //    int left=0,right=matrix[0].size()-1,top=0,down=matrix.size()-1;
    //    int flag=0;
    //    while(left<=right and top<=down){
    //        if(flag==0){
    //            for(int i=left;i<=right;i++) v.push_back(matrix[top][i]);
    //            top++;
    //        }
    //        else if(flag==1){
    //            for(int i=top;i<=down;i++) v.push_back(matrix[i][right]);
    //            right--;
    //        }
    //        else if(flag==2){
    //            for(int i=right;i>=left;i--) v.push_back(matrix[down][i]);
    //            down--;
    //        }
    //        else{
    //            for(int i=down;i>=top;i--) v.push_back(matrix[i][left]);
    //            left++;
    //        }
    //        flag=(flag+1)%4;
    //    }
    //    return v;

    return 0;
}