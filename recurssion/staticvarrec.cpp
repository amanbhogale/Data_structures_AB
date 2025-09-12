/*changes when static variable is used
 in recurssion*/
#include <iostream>
using namespace std;

int withstat(int n){
	//static varible declaration
	int x = 5;
	if(n > 0){
		
		return withstat(n-1) + x ;
	}
	return 0;
}

int main(){
	int n = 5;
	for (int i=0 ; i< n ; i++){
		cout << withstat(i) << " ";
	}
	return 0;

}


/*n =5

func(n)

x = 0

x++

returns f(n-1)+x;

x =1 , n-1 =4 // ly 

x=2 , n-1 = 3 //ly 

x = 3 , n-1 = 2 // lly 

x = 4 , n-1 = 1 return’s 5 because x is called at return time

x = 5 , n-1 = 0 here the function terminates but x increments because before the function call */
