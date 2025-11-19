#include <iostream> 
using namespace std; 
int partition(int arr[], int low, int high){ 
    int i=low; 
    int j=high; 
    int pivot = arr[low]; 
    while(i<j){ 
        while(arr[i]<=pivot && i<=high-1) i++; 
        while(arr[j]>=pivot && j>=low+1) j--; 
        if(i<j) swap(arr[i],arr[j]); 
    } 
    swap(arr[low],arr[j]); 
    return j; 
} 
void quick_sort(int arr[], int low, int high){ 
    if(low<high){ 
        int pIndex = partition(arr,low,high); 
        quick_sort(arr,low,pIndex-1); 
        quick_sort(arr,pIndex+1,high); 
    } 
} 
int main(){ 
    int arr[] = {4,6,2,5,7,9,1,3}; 
    int low = 0; 
    int high = 7; 
    quick_sort(arr,low,high); 
    for(int i=0;i<8;i++){ 
        cout<<arr[i]<<' '; 
    } 
}
