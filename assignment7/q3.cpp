#include <iostream> 
using namespace std; 
int main(){ 
    int a[] = {23, 7, 41, 14, 36, 2, 29, 48, 11, 19}; 
    int i,j; 
    cout<<"Unsorted array is "<<endl; 
    for(i=0;i<10;i++){ 
        cout<<a[i]<<' '; 
    } 
    for(i=0;i<9;i++){ 
        int temp = a[i+1]; 
        for(j=i+1;j>0;j--){ 
            if(temp<a[j-1]){ 
                a[j] = a[j-1]; 
            } 
            else break; 
        } 
        a[j] = temp; 
    } 
    cout<<endl<<"Sorted array is "<<endl; 
    for(i=0;i<10;i++){ 
        cout<<a[i]<<' '; 
    } 
} 
