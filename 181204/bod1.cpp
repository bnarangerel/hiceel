/*		if(i == 0){
				if(j > n - 1){
					cout << (n * 2) - j - 1 ;
 				} else {
 					cout << j + 1;
				}
			}*/
#include<iostream>

using namespace std;

int main(){
	int n, i, j, h = 1;
	cin >> n;
	int a[n][n];
	for(i = 0; i < n; i ++){
		h = i + 1;
		for(j = 0; j < n * 2 ; j ++){
			if(i + j  > n - 1 && j  <= n + i){
				cout << " ";
			} else {
				cout << "*";
			}
		}
		cout << endl;
	}
}
