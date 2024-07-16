//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    string ans="-1";
    void recursion(string str,int k,int i){
        if(ans=="-1")  ans=str;
        else{
            if(ans<str)  ans=str;
        }
        if(k==0 || i==str.size())
           return;
        char max=str[i],c;
        for(int j=i+1;j<str.size();j++){
            if(max<str[j]){
                max=str[j];
                c=j;
            }    
        }
        if(max==str[i])  
            recursion(str,k,i+1);
        else{    
            for(int j=i+1;j<str.size();j++){
                if(max==str[j]){
                    swap(str[i],str[j]);
                    recursion(str,k-1,i+1);
                    swap(str[i],str[j]);
                }
            }
        }
        return;
    }
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
       recursion(str,k,0);
       return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}

// } Driver Code Ends