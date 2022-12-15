#include <iostream>
#include <vector>

using namespace std;

// Function to implement juggling algorithm
void juggling(vector<int>& arr, int d)
{
    int n = arr.size();

    // Create a temporary array to store elements
    // of the array after rotation
    vector<int> temp(n);

    // Copy the elements from the original array
    // to the temporary array
    for (int i = 0; i < n; i++)
        temp[i] = arr[(i + d) % n];

    // Copy the elements from the temporary array
    // to the original array
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

// Main function
int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };

    int d = 2;

    // Perform juggling algorithm on the array
    juggling(arr, d);

    // Print the rotated array
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
