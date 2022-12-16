/*
Range-based for loop in C++ is added since C++ 11. 
It executes a for loop over a range. 
Used as a more readable equivalent to the traditional for loop 
operating over a range of values, 
such as all elements in a container.
*/
//Syntax
/*for ( range_declaration : range_expression ) 
    loop_statement

Parameters :
range_declaration : 
a declaration of a named variable, whose type is the 
type of the element of the sequence represented by 
range_expression, or a reference to that type.
Often uses the auto specifier for automatic type 
deduction.

range_expression : 
any expression that represents a suitable sequence 
or a braced-init-list.

loop_statement : 
any statement, typically a compound statement, which
is the body of the loop.*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;
//Driver
int main(void){
    // Iterating over whole array
    vector<int> v = {0 , 1, 2 , 3, 4  , 5};
    for(auto i:v){
        cout<< i << " ";
    }cout<<endl;
    // the initializer may be braced init list
    for(int n : {0 , 1 ,2 ,3 ,4 ,5}){
        cout << n << " ";
    }cout << endl;
    //iterating over array
    int a[] = {0 ,1 ,2 , 3, 4 ,5};
    for(int n:a){
        cout << n << " ";
    }cout << endl;
    // just running loop for every array
    // element 
    for(int n : a){
        cout << "In loop" << ' ';
    }cout<< endl;
    // printing string character
    string str = "zombie";
    for(char c : str){
        cout << c << " ";
    }cout << endl;
    // printing key values of a map
    map <int , int> MAP(
        {{1,1} , {2 ,2} , {3 , 3}}
    );
    for(auto i :MAP){
        cout << "{" << i.first << " , " << i.second << '}'<<endl;
    }
    


}