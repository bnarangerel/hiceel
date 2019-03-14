#include<iostream>

using namespace std;

int main(){
	int i, j, n;
	cin >> n;
	int a[n][n];
	for(i = 0; i < n; i ++){
		for(j = 0; j < n*2-1; j ++){
			if(i + j == n -1 || j - i == n - 1){
				cout << "&";
			} else {
				cout << "#";
			}
		}
		cout << endl;
	}
}
