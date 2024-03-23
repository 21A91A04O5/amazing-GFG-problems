//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    System.out.println(new Solution().evaluatePostFix(br.readLine().trim()));
		}
	}
}
// } Driver Code Ends


class Solution
{
    //Function to evaluate a postfix expression.
    public static int evaluatePostFix(String S)
    {
        // Your code here
        Stack<Integer> num=new Stack<>();
        for(int i=0;i<S.length();i++){
            if(S.charAt(i)>='0' && S.charAt(i)<='9')
              num.push(Character.getNumericValue(S.charAt(i)));
            else{
                int a=num.peek();
                num.pop();
                int b=num.peek();
                num.pop();
                if(S.charAt(i)=='+')
                   num.push(a+b);
                else if(S.charAt(i)=='-')
                   num.push(b-a);
                else if(S.charAt(i)=='*')
                   num.push(a*b);
                else
                   num.push(b/a);
            }
        }
        return num.peek();
    }
}