//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector<int> vis(V);
	    queue<int> q;
	    q.push(0);
	    vis[0]=1;
	    if(X==0) return 0;
	    int c=0;
	    while(!q.empty()){
	        int s=q.size();
	        c+=1;
	        while(s--){
	            int top=q.front();
	            q.pop();
	            vis[top]=1;
	            for(auto it:adj[top]){
	                if(it==X) return c;
	                if(!vis[it]){
	                    q.push(it);
	                    vis.push_back(it);
	                }
	            }
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends