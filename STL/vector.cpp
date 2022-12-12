// Dynamic array 
#include<iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> v;
    // initialize vector with size
    vector<int> a(5 , 1);
    // ==> vector is init with the size 5 and all element as 1 
    // if 1 is not provided by default it's iniT TO 0
    vector <int> last(a);

    cout << "Print a"<<endl;
    for(int i:a){
        cout << i << " ";
    }cout << endl;
    cout << "Print last"<<endl;
    for(int i:a){
        cout << i << " ";
    }cout << endl;
    cout<< "Capacity -->" << v.capacity() << endl;
    v.push_back(1);
    cout<< "Capacity-->" << v.capacity() << endl;
    v.push_back(2);
    cout<< "Capacity -->" << v.capacity() << endl;
    v.push_back(3);
    cout<< "Capacity -->" << v.capacity() << endl;
    cout<< "size -->" << v.size() << endl;
    cout<< "front -->" << v.front() << endl;
    cout<< "back -->" << v.back() << endl;


    // before pop
    cout<< "Before pop" << endl;
    for(int i:v){
        cout << i << " ";

    }cout << endl;
    //pop
    v.pop_back();
    // After pop
    cout << "After pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;
    // 
    cout << "Before clear-- > size " << v.size() << endl;
    cout << "Before clear-- > Capacity " << v.capacity() << endl;
    v.clear();
    cout << "After clear-- > size " << v.size() << endl;
    cout << "Before clear-- > Capacity " << v.capacity() << endl;

}