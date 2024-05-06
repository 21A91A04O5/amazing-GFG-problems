//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(vector<vector<char>>& grid,int i,int j,int m,int n,vector<vector<int>>& vis){
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=1;
        while(!q.empty()){
            pair<int,int> a=q.front();
            q.pop();
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int r=a.first+i;
                    int c=a.second+j;
                    if(r>=0 and r<m and c>=0 and c<n and !vis[r][c] and grid[r][c]=='1'){
                        vis[r][c]=1;
                        q.push({r,c});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] and grid[i][j]=='1'){
                    count++;
                    bfs(grid,i,j,m,n,vis);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends