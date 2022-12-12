#include<bits/stdc++.h>
using namespace std;
// Function to left rotate arr[] of size n by d
void Rotate(int arr[] , int d , int n){
    int p= 1;
    while(p<=d){
        int last = arr[0];
        for(int i=0 ; i<n ;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] =last;
        p++;
    }
}
void printArray(int arr[] , int size){
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
}
int main(void){
    int arr[] = {1 , 2 ,3 , 4 , 5, 6 ,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d =2;
    // Call Function
    Rotate(arr  , d  , n);
    printArray(arr , n);
    return 0;
}