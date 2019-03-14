#include<iostream>

using namespace std;

int main(){
	int i, j, n = 8, a, b, x, y;
	
	
	for(i = 1; i <= n; i ++){
		for(j = 1; j <= n; j ++){
			if(i % 2 == 0 && j % 2 != 0 || i % 2 != 0 && j % 2 == 0){
				cout << "0" << " " ;
			} else {
					cout << "1" << " " ;
			}
		}
		cout << endl;
	}
	cout << "1 egneenii dugaar: " ;
	cin >> a ;
	cout << "1 baganiin dugaar: " ;
	cin >> b;
	cout << "2 egneenii dugaar: " ;
	cin >> x ;
	cout << "2 baganiin dugaar: " ;
	cin >> y;
	while(x > 9  && y > 9 && a > 9 && b > 9){
		cout << "ta toogoo 8s ihgui too oruulna uu!!! " << endl;
		cout << "1 egneenii dugaar: " ;
		cin >> a ;
		cout << "1 baganiin dugaar: " ;
		cin >> b;
		cout << "2 egneenii dugaar: " ;
		cin >> x ;
		cout << "2 baganiin dugaar: " ;
		cin >> y;
	}
	if(a % 2 == 0 && b % 2 != 0 || a % 2 != 0 && b % 2 == 0){
		if(x % 2 == 0 && y % 2 != 0 || x % 2 != 0 && y % 2 == 0){
			cout << " yes " << endl;
		} else {
			cout << " no " << endl;
		}
	} else {
		if(x % 2 != 0 && y % 2 == 0 || x % 2 == 0 && y % 2 != 0){
			cout << "yes" << endl;
		} else {
			cout << " no " << endl ;
		}
	}
	
	return 0;
}
