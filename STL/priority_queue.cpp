// basically it's mX Heap
/*Priority Queue is an abstract data type that is similar to a queue, 
and every element has some priority value associated with it.
The priority of the elements in a priority queue determines 
the order in which elements are served (i.e., the order in which they are removed).
If in any case the elements have same priority, 
they are served as per their ordering in the queue.*/
#include <iostream>
#include<queue>
using namespace std;
int main(void){
    //max heap
    priority_queue <int> maxi;
    // min-heap
    priority_queue<int , vector<int> , greater<int> > mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n = maxi.size();
    for(int i=0 ; i<n; i++){
        cout<< maxi.top() << " ";
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m = mini.size();
    for(int i=0 ; i<m; i++){
        cout<< mini.top() << " ";
        mini.pop();
    }cout<<endl;
    cout << "Is Queue Empty ?? --> " << mini.empty() << endl;

    return 0;
}