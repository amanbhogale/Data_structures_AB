#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int size);
void swap(int arr[] , int fi , int si , int d);

void leftRotate(int arr[] , int d , int n){
    // Return If number of element to be rotated
    if(d==0 || d==n){
        return;
    }
    if(d>n){
        // if number of element to be rotated is more than array size 
        d = d%n;
    }
    // if the number of elements to be rotated is 
    // exactly the half the size of the array
    if(n-d ==d){
        swap(arr , 0 , n-d ,d);
        return;
    }
    // If A array is shorter
    if(d < n-d){
        swap(arr , 0 , n-d , d);
        return;
    }
    // IF B is shorter
    else{
        swap(arr , 0  , d , n-d);
        leftRotate(arr + n-d , 2 * d - n , d );// tricky 
    }
}
//print arr function
void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl;
}
// This function swaps d element starting at index fi
// with d element starting at index si
void swap(int arr[] , int fi , int si  , int d){
    int i , tmp;
    for(i =0 ; i<d ; i++){
        tmp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i ] =tmp;
    }
}
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}