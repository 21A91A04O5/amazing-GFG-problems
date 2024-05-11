# Function should return an integer value
def convertFive(n):
    # Code here
    num=0
    times=1
    while n>0:
        r=n%10
        if r==0:
            num=5*times+num
        else:
            num=r*times+num
        n=n//10
        times*=10
    return num

#{ 
 # Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        print (convertFive(int(input().strip())))
# } Driver Code Ends