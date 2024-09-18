//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<int> st;
        if(x[0]==')' or x[0]==']' or x[0]=='}') return false;
        else st.push(x[0]);
        int i=1;
        while(i<x.size()){
            if(st.empty() or x[i]=='(' or x[i]=='[' or x[i]=='{')
               st.push(x[i]);
            else if(x[i]==')' and st.top()=='(')
               st.pop();
            else if(x[i]==']' and st.top()=='[')
               st.pop();
            else if(x[i]=='}' and st.top()=='{')
               st.pop();
            else return false;
            i++;
        }
        if(st.empty()) return true;;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends