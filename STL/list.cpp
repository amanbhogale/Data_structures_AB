#include <iostream>
#include <list>
using namespace std;
int main(void){
    list<int> l;
    // copy list 
    l.push_back(1);
    l.push_front(2);
    for (int i:l){
        cout<< i<< " ";
    }cout << endl;
    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for(int i:l){
        cout<< i << " ";
    }cout<<endl;
    cout << "Size of List --> "<< l.size() <<endl;

}