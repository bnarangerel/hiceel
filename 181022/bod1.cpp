#include<iostream>

using namespace std;

int main(){
	int i, j, n, s = 0;
	
	cin >> n;
	int a[n][n];
	
	
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			cin >> a[i][j];
		}
	}
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if(i == j&& i + j == n){
				s += a[i][j];
			}
		}
	}
	cout << s << endl;
}
