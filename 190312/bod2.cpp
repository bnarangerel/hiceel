#include<iostream>

using namespace std;

int main(){
	int i, j, y, n;
	cin >> n;
	y = 0;
	for(i = 0; i < (n * 2) - 1; i ++){
		for(j = 0; j < (n * 2) - 1; j ++){
			if(i == j || i + j == n * 2 - 2){
				if(i >= n) cout << (i - n) + 2;
				else cout << n - i;
			} else {
				if(i == (n * 2) - 2|| j == (n * 2) - 2|| i == y || j == y){
					cout << n - y;
				} else {
					cout << "0";
				}
			}
		}
		cout << endl;
	}
}
