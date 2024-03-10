//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int i=0,j=0,i1=n-1,j1=n-1,c=0;
	    while(i<n and j<n and i1>=0 and j1>=0){
	        if(mat1[i][j]+mat2[i1][j1]==x){
	            c+=1;
	            if(j==n-1){   i+=1;  j=0;
	            }
	            else   j++;
	            if(j1==0){  i1-=1;  j1=n-1;
	            }
	            else   j1-=1;
	        }
	        else if(mat1[i][j]+mat2[i1][j1]<x){
	            if(j==n-1){  i+=1; j=0;
	            }
	            else   j+=1;
	        }
	        else{
	            if(j1==0){  i1-=1;  j1=n-1;
	            }
	            else  j1-=1;
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends