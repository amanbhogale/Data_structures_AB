#include <iostream>
using namespace std;

void func1(int n){
	if(n > 0){
		cout << n << " ";
		func1(n-1);
	}
}

int main(){
	int n = 10;
	func1(n);
	return 0;

}
