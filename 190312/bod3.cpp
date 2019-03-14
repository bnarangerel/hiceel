#include<iostream>

using namespace std;

int main(){
	int i, j, y = 1, n;
	cin >> n;
	for(i = 0; i < (n * 2) - 1; i ++){
		for(j = 0; j < (n * 2) - 1; j ++){
			if(i == j || i + j == n * 2 - 2){
				if(i >= n)cout << (n * 2) - 1 - i;
				else cout << i + 1 ;
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
