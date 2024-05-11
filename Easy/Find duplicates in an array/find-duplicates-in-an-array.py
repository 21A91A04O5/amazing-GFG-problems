class Solution:
    def duplicates(self, arr, n): 
    	# code here
	    dict={}
	    a=[]
	    for i in arr:
    	    if i not in dict:
    	        dict[i]=1
            else:
                dict[i]+=1
        for i in dict:
            if dict[i]>1:
                a.append(i)
        if len(a)==0:
            a.append(-1)
        return sorted(a)

#{ 
 # Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends