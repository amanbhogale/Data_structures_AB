#include <iostream>
#include <stack>
using namespace std;
int main(void){
    stack<string> s;
    s.push("zombie");
    s.push("69");
    s.push("@");
    cout<<"Top Element ---> " << s.top() << endl;
    s.pop();
    cout<<"Top Element ---> " << s.top() << endl;
    
    cout <<"Size of stack ---> "<< s.size() << endl;

    cout << "Empty Or Not ---> " << s.empty() << endl;
    return 0;
}