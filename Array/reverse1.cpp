#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[] , int start , int end){
    while(start < end){
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start ++;
        end--;
    }
}
void printArray(int arr[] , int size){
    for (int i=0 ; i< size;i++){
        cout << arr[i] << " ";
    }
}
int main(void){
    int arr[] = {1 ,2, 3, 4, 5 ,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // print the original array
    printArray(arr , n);
    reverseArray(arr, 0 , n-1);
    cout<< endl;
    cout << "Reversed array is:" << endl;
    printArray(arr , n);
    return 0;

}