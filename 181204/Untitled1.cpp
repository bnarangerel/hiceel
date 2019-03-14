#include<iostream>

using namespace std;

int main(){
	int n, i, j, h = 1;
	cin >> n;
	int a[n][n];
	for(i = 0; i < n; i ++){
		h = i + 1;
		for(j = 0; j < n * 2 + 1; j ++){
			if(i + j  == n || j  == n + i){
				cout << "&";
			} else {
				cout << "#";
			}
		}
		cout << endl;
	}
}
