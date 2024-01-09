//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
    	vector<int> a;
    	int size=1,carry=0;
    	a.push_back(1);
    	int product=1;
    	for(int i=2;i<=N;i++){
    	    int carry=0;
    	    for(int j=0;j<size;j++){
    	        product=i*a[j]+carry;
    	        a[j]=product%10;
    	        carry=product/10;
    	    }
    	    while(carry>0){
    	       a.push_back(carry%10);
    	       size++;
    	       carry=carry/10;
    	    }
    	}
    	reverse(a.begin(),a.end());
    	return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends