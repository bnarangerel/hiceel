#include<iostream>

using namespace std;

int main(){
	int n, i, l, j;
	
	cin >> n;
	
	for(i = 0; i <= n + 2; i ++){
		for(j = 0; j < n + 2; j ++){
			if(j + i >= n + 2){
				cout << "*" ;
			} else {
				cout << " " ;
			}
		}
		cout << endl;
	}
	for(i = 0; i <= n * 2; i ++){
		cout << " " ;
		for(j = 0; j < n + 2; j ++){
			if(i == n - 1  || i == n){
				for(l = 0; l < n; l ++){
					cout << "*" ;
				}
			} 
				cout << "*" ;
		}
		cout << endl;
	}
	for(i = 0; i <= n + 2; i ++){
		for(j = 0; j < n + 2; j ++){
			if(j >= i){
				cout << "*" ;
			} else {
				cout << " " ;
			}
		}
		cout << endl;
	}
}
