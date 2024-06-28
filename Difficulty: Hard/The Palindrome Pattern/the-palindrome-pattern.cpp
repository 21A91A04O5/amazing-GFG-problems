//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool fun(vector<int> arr){
        for(int i=0;i<arr.size()/2;i++){
            if(arr[i]!=arr[arr.size()-i-1])
               return false;
        }
        return true;
    }
    bool fun1(vector<vector<int>> arr,int j){
        for(int i=0;i<arr.size()/2;i++){
            if(arr[i][j]!=arr[arr.size()-i-1][j])
               return false;
        }
        return true;
    }
    string pattern(vector<vector<int>> &arr) {
        int r=INT_MAX,c=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(fun(arr[i])){
                r=i;
                break;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(fun1(arr,i)){
                c=i;
                break;
            }
        }
        if(r==INT_MAX and c==INT_MAX) return "-1";
        if(r!=INT_MAX) return to_string(r)+" R";
        return to_string(c)+" C";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends