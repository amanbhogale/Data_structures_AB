// Time complexity : O(N)
// Space complexity : O(N)

#include <iostream>
using namespace std;
int linear_search(int arr[ ] , int size , int key){
    if (size == 0){
        return -1;
    }
    else if (arr[size -1] == key){
        // return the index
        return size -1;
    }
    else{
        int ans = linear_search(arr  ,size -1 , key);
        return ans;
    }
}
// Driver's Code 
int main(void){
    int arr[5] = {5 , 15 , 6 , 9 , 4};
    int key = 4;
    int ans = linear_search(arr, 5 , key);
    if(ans == -1){
        cout << "The Element --> " << key  << " Found at -- > " << ans << 
        "th index of the given array. " << endl;

    }
    else{
        cout << "The Element " << key << " Found at --> "
            << ans << "th index of the given array." << endl;
    }
    return 0;
}