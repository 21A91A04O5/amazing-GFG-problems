//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfs(int V,vector<int> adj[]){
        vector<int> vis(V);
        stack<int> st;
        st.push(0);
        vector<int> ans;
        while(!st.empty()){
            int t=st.top();
            if(!vis[t])ans.push_back(t);
            st.pop();
            if(!vis[t]){
                for(int i=adj[t].size()-1;i>=0;i--){
                    if(!vis[adj[t][i]]){
                        st.push(adj[t][i]);
                        // vis[adj[t][i]]=1;
                    }
                }
                vis[t]=1;
            }
        }
        return ans;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        return dfs(V,adj);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends