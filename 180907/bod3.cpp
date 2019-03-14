#include<iostream>

using namespace std;

int sum(int n){
	int y, s = 0;
	
	while(n > 0){
		y = n % 10;
		s = s + y;
		n /= 10;
	}
	
	return s;
	
}
int main(){
	int n;
	
	cin >> n;
	
	cout << sum(n) ;
	
	return 0;
}
