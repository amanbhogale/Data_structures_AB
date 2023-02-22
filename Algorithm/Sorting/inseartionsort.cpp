#include <iostream>
using namespace std;
void insertionSort(int arr[] , int n){
    int i , j , key;
    for(i=1; i<n;i++){
        key = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)  
        {
            arr[j+1] = arr[j];
            j=j-1;

        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {64 , 25 , 12 , 22 , 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr , n);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
    return 0;
}