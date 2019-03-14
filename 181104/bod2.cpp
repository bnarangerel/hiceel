#include<iostream>

using namespace std;

int main(){
	int n, i, j, k = 1, h = 1;
	cin >> n;
	int a[n][n];
	for(i = 0; i < n; i ++){
		k = i;
		h = 1;
		for(j = 0; j < n; j ++){
			if(i == j){
				cout << "0 ";
			} else {
				if(i > j){	
					cout << k << " ";
					k --;	
				} else {
					cout << h << " ";
					h ++;
				}	
			}

		}
		cout << endl;
	}
}
