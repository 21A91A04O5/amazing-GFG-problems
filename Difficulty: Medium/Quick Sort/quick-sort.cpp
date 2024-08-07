//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high) return;
        int a=partition(arr,low,high);
        quickSort(arr,low,a-1);
        quickSort(arr,a+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[high]; // Correct pivot selection (last element)
        int i = low; // Start pointer from low

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) { // Move elements less than pivot to the left
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[high]); // Place pivot in its correct position
        return i; 
        // if(low==high) return low;
        // int pivot=arr[high];
        // int i=low,j=high-1;
        // while(i<=j){
        //     if(arr[i]>pivot and arr[j]<pivot){
        //         swap(arr[i],arr[j]);
        //         i++;
        //         j--;
        //     }
        //     else if(arr[i]<pivot and arr[j]>pivot){ i++; j--;}
        //     else if(arr[i]>pivot) j--;
        //     else if(arr[j]<pivot) i++;
        // }
        // swap(arr[i],arr[high]);
        // return i;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends