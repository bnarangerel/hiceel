#include<iostream>

using namespace std;

int main(){
	int n, i, j, b = 1;
	
	cin >> n;
	int a[n][n];
	
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; i ++){
			if(j % 2 != 0){
				cout << b  << " " ;
				b ++;
			}
		}
		cout << endl;
	}
	
}
