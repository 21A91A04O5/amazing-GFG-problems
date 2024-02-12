//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void fun(stack<int>&s,int Size,int n){
        if(Size==n){
           s.pop();
           return;
        }
        int a=s.top();
        s.pop();
        fun(s,Size-1,n);
        s.push(a);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        if(sizeOfStack%2==1)
            fun(s,sizeOfStack,(sizeOfStack+1)/2);
        else
            fun(s,sizeOfStack,sizeOfStack/2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends