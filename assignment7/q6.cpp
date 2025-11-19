#include <iostream> 
using namespace std; 
int main() { 
    int arr[] = {37,12,49,5,28,44,7,19,33,2}; 
    for (int i=0;i<5;i++) { 
        int min = arr[i]; 
        int max = arr[9-i]; 
        int min_index = i; 
        int max_index = 9-i; 
        for (int j=i+1;j<10-i;j++) { 
            if (arr[j]<min){ 
                min = arr[j]; 
                min_index = j; 
            } 
if (arr[j]>max){ 
max = arr[j]; 
max_index = j; 
            } 
        } 
swap(arr[i], arr[min_index]); 
if (max_index == i) { // if we swapped max_index element 
where it was supposed to be originally 
max_index = min_index; 
        } 
swap(arr[9 - i], arr[max_index]); 
    } 
for (int i=0;i<10;i++) { 
cout<<arr[i]<< ' '; 
    }   
} 
