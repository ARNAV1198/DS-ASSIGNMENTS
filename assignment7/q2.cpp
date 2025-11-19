#include <iostream> 
using namespace std; 
int main(){ 
    int arr[] = {10,9,8,7,6,5,4,3,2,1}; 
    for(int i=0;i<9;i++){ 
        int min = arr[i]; 
        int index = i; 
        for(int j=i+1;j<10;j++){ 
            if(arr[j]<min){ 
                min = arr[j]; 
                index = j; 
            } 
        } 
        swap(arr[i],arr[index]); 
    } 
    for(int i=0;i<10;i++){ 
        cout<<arr[i]<<' '; 
    } 
} 
