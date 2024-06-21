#User function Template for python3
import math
class Solution:
    def compareFrac (self, str):
        a,b=str.split(",")
        a1,a2=map(int,a.split("/"))
        b1,b2=map(int,b.split("/"))
        l=a2*b2//math.gcd(a2,b2)
        if a1==0 and b1==0:
            return "equal"
        elif a1==0:return b
        elif b1==0:return a
        c=l//a2*a1
        d=l//b2*b1
        if c==d:return "equal"
        elif c>d:return a
        return b[1:]

#{ 
 # Driver Code Starts
#Initial Template for Python 3
import re

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        str = input()
        print(ob.compareFrac(str))

# } Driver Code Ends