#include <iostream> 
using namespace std; 
void merge(int arr[], int low, int mid, int high){ 
    vector<int> temp; 
    int left = low; // first array is from [left .. mid] 
    int right = mid+1; // second array is from [mid+1 .. high] 
    while(left<=mid && right<=high){ 
        if(arr[left]<arr[right]){ 
            temp.push_back(arr[left]); 
            left++; 
        } 
        else{ 
            temp.push_back(arr[right]); 
            right++; 
        } 
    } 
    while(left<=mid){ 
        temp.push_back(arr[left]); // for remaining elements of 
left if any are there 
        left++; 
    } 
    while(right<=high){ 
        temp.push_back(arr[right]); // for remaining elements of 
right if any are there 
        right++; 
    } 
    for(int i=low;i<=high;i++){ 
        arr[i] = temp[i-low]; 
    } 
} 
void merge_sort(int arr[], int low, int high){ 
    if(low>=high)return; // base case 
    int mid = (low+high)/2; 
    merge_sort(arr,low,mid); // sorts lhs side of the array 
    merge_sort(arr,mid+1,high); // sorts rhs side of the array 
    merge(arr,low,mid,high); // merges two sorted array into one 
sorted array 
} 
int main(){ 
    int arr[] = {3,1,2,4,1,5,2,6,4}; 
    int low = 0; 
    int high = 8; 
    merge_sort(arr,low,high); 
    for(int i=0;i<9;i++){ 
        cout<<arr[i]<<' '; 
    } 
} 
