#include <iostream>
using namespace std;

int main(){
	double x = 2,sum = 0;
	while(x <= 69){
		sum = sum + 1/x;
		x = x + 1;
	}
	cout << sum;
	
	return 0;

}
