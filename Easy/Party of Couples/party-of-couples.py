#User function Template for python3

class Solution:
    def findSingle(self, N, arr):
        # code here
        c=arr[0]
        for i in range(1,N):
            c^=arr[i]
        return c    




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        arr = input().split()
        for itr in range(N):
            arr[itr] = int(arr[itr])
        
        ob = Solution()
        print(ob.findSingle(N, arr))

# } Driver Code Ends