//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int num=0,f=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-' and i==0){
              f=1;
            }
            else if(s[i]>='0' and s[i]<='9'){
                num=num*10+(s[i]-'0');
            }
            else
               return -1;
        }
        if(f==1) num*=-1;
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends