#include <iostream> 
using namespace std; 
int main(){ 
int arr[] = {10,9,8,7,6,5,4,3,2,1}; 
cout<<"Unsorted array is "<<endl; 
for(int i=0;i<10;i++){ 
cout<<arr[i]<<' '; 
    } 
cout<<endl; 
for(int i=0;i<9;i++){ 
bool variable = false; 
for(int j=0;j<10-i-1;j++){ 
if(arr[j+1]<arr[j]){ 
swap(arr[j],arr[j+1]); 
variable = true; 
            } 
        } 
if(!variable){ 
break; 
        } 
    } 
cout<<"Sorted array is "<<endl; 
for(int i=0;i<10;i++){ 
cout<<arr[i]<<' '; 
    } 
} 
