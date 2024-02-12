//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int N = Integer.parseInt(in.readLine());
            
            Solution ob = new Solution();
            System.out.println(ob.sequence(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    static long sequence(int n){
        // code here
        int mod=1000000007;
        int b=1;
        long ans=0;
        long c=0;
        for(int j=0;j<n;j++){
            c=1;
            for(int i=0;i<=j;i++){
                c=(c%mod*b%mod)%mod;;
                b+=1;
            }
            ans=(ans%mod+c%mod)%mod;
        }
        return ans;
    }
}