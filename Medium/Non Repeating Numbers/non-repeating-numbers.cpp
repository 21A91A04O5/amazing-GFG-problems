//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int fun(int n){
        int c=0;
        while(n>0){
            c+=1;
            if(n&1)
               return c-1;
            n=n>>1;
        }
        return c-1;
    }
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int c=0,a=0,b=0;
        for(int i=0;i<nums.size();i++){
            c^=nums[i];
        }
        int pos=fun(c);
        for(int i=0;i<nums.size();i++){
            if(nums[i]&(1<<pos))
               a^=nums[i];
            else
               b^=nums[i];
        }
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends