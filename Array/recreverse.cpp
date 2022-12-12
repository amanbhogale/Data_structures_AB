#include<bits/stdc++.h>
using namespace std;
//Function to reverse arr[] from start to end 

void reverseArray(int arr[] , int start , int end){
    if (start >= end){
        return;

    }
    int tmp = arr[start];
    arr[start] = arr[end];
    arr[end] = tmp;
    //recursive Function calling
    reverseArray(arr , start+1 , end-1);
}
// function for printing an array
void printArray(int arr[] , int size){
    for(int i =0 ; i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(void){
    int arr[] = {1 , 2, 3,4 ,5 ,6};
    printArray(arr , 6);
    cout << endl;
    //Function calling
    reverseArray(arr , 0  , 5);
    cout << "Reversal array is" <<endl;
    // Print the Reversal array
    printArray(arr , 6);
    return 0;
}