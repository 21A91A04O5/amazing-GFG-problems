//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        vector<int> ans;
        int m=matrix.size(),n=matrix[0].size();
        int left=0,top=0,right=n-1,bottom=m-1;
        while(top<=bottom and left<=right){
            for(int j=left;j<=right;j++)
                ans.push_back(matrix[top][j]);
            top++;
            for(int i=top;i<=bottom;i++)
                ans.push_back(matrix[i][right]);
            right--;
            if(top<=bottom){
                for(int j=right;j>=left;j--)
                    ans.push_back(matrix[bottom][j]);
            }
            bottom--;
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                    ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends