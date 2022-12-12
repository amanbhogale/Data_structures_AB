#include <iostream>
#include <queue>
using namespace std;
int main(void){
    queue<string> q;
    q.push("zombie");
    q.push("612");
    q.push("@");
    cout << "Size Before pop ---> " << q.size() << endl; 
    cout << "First Element ---> " << q.front() << endl;
    q.pop();
    cout << "First Element After pop ---> " << q.front() << endl;
    cout << "Size After pop ---> " << q.size() << endl; 
    return 0;
}