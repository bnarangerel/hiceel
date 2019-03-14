#include<iostream>

using namespace std;

int main(){
	int n, i, j;
	cin >> n;
	int a[n][n];
	for(i = 0; i < n; i ++){
		for(j = 0; j < n * 2 - 1; j ++){
			if(i + j < n){
				cout << "*";
			} else {
				cout << " ";
			}
			if(j > i){
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}	
}
