/* Sets are a type of associative container in which each element
has to be unique because the value of the element identifies it.
The values are stored in a specific sorted order i.e. either ascending 
or descending.
*/

// Syntax
// set<datatype> setname;
// Example
//set<int> val; // defining an empty set
// set<int> val = {6, 10, 5, 1}; // defining a set with values
#include <iostream>
#include <set>
using namespace std;
int main(void){
    set <int> s;
    s.insert(5);
    s.insert(4);
    s.insert(6);// complexity Ologn
    s.insert(0);
    s.insert(10);
    s.insert(3);
    s.insert(0);
    for(auto i:s){
        cout << i << endl;// sorted order
    }cout << endl;
    set<int>::iterator it = s.begin();
    it ++;

    s.erase(it);
    for(auto i:s){
        cout << i << endl;// sorted order
    }cout << endl;
    cout <<"Check If The Element is present Or Not --> "<< s.count(5)<< endl; // check
    set <int>::iterator itr = s.find(5);
    for(auto it=itr; it!= s.end() ; it++){
        cout << *it << " ";

    }cout << endl;
}