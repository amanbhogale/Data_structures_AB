// including libraries
#include <iostream>
#include <map>
/*Maps are associative containers that store elements
in a mapped fashion. Each element has a key value and 
a mapped value. No two mapped values can have the same key values.
*/
// insert , map  , delete .. O(logn) // because of random black tree // balanced tree
// if hashing table is used the complexity ==> implicates to O(1)..

using namespace std;
int main(void){
    map<int , string> m;
    m[1] = "zombie";
    m[2] = "612";
    m[5] = "@";
    m.insert({3 ,"zombie_catchers"});

    cout<<"-- Before Erase --"<< endl;
    for(auto i:m){
        cout << i.first <<endl;
    }cout <<endl;
    cout << "finding 5 --> " << m.count(5) << endl;
    m.erase(5);
    cout << "-- After Erase --" << endl;
    for(auto i:m){
        cout << i.first <<endl;
    }cout <<endl;
    auto it = m.find(2);// returns iterator
    
    for(auto i=it; i!=m.end() ; i++){
        cout << (*i).first << endl;
    }
    return 0;


}