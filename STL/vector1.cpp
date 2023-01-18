#include <iostream>
#include <vector>
using namespace std;
void increment(vector<int> &numbers){// here the numbers list is passed by reference
    for(int &n : numbers){// here n is the variable passed by reference 
    /*for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    int &n = *it;
    n++;
}
*/// would be more readable version but bit risk off-by-one error
// the used for loop is called
//The for loop syntax I used is a C++11 feature called range-based for loop.
// It allows to iterate over the elements of a container such as an array or a vector.


        n++;
    }
}
int main(void){
    vector<int> numbers {1 , 5, 2 , 9 , 0 };
    increment(numbers);
    for (int n : numbers){
        cout << n <<" ";
    }
}