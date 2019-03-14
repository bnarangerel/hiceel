#include<iostream>

using namespace std;


int urvuu(int n){
	int i = 0, y;
	while(n != 0){
		y = n % 10;
		i = (i * 10) + y;
		n = n / 10;
	}
	return i;
}
int main(){
	
	int n;
	
	cin >> n;
	cout << urvuu(n) ;
	
	return 0;
}
