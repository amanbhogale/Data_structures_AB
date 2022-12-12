#include<bits/stdc++.h>
using namespace std;
void Rotate(int arr[] , int d , int n){
    // storing the rotated version of array
    int tmp[n];
    //for track of current index.
    int k =0;
    // storing n-d elements of the array arr[]
    //into temp
    for(int i=d; i< n;i++){
        tmp[k] = arr[i];
        k++;
    }
    // storing the first d element of the array arr[]
    //into tmp
    for(int i=0; i<d;i++){
        tmp[k] = arr[i];
        k++;
    }
    // copying the element of tmp[] in arr[]
    for(int i=0; i<n;i++){
        arr[i] = tmp[i];
    }
}
// Function to print Element of array
void PrintTheArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
}
int main(void){
    int arr[] = {1 , 2 ,3 ,4 ,5 ,6 , 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=1;
    //calling the function
    Rotate(arr , d , n);
    PrintTheArray(arr ,n );
    return 0;
}

// Time complexity: O(N)
// Auxiliary Space: O(N)
