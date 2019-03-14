#include<iostream>

using namespace std;

int main(){
	int n, i, j, h = 1;
	cin >> n;
	n -= 1;
	int a[n][n];
	for(i = 0; i <= n; i ++){
		cout << i + 1;
	}
	cout << endl;
	for(i = 0; i < n; i ++){
		h = i + 1;
		for(j = 0; j < n * 2 ; j ++){
			if( i + j> n - 1 && j <= n + i){
				cout << "*";
			} else {
				if(j < n){
					cout << j + 1;
				}else cout << " ";
			}
		}
		cout << endl;
	}
	for(i = 0; i <= n * 2; i ++){
		cout << "*";
	}
}
