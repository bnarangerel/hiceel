#include<iostream>

using namespace std;

int main(){
	int i, j, s = 1, b, n;
	
	cout << "ta toogoo oruulna uu:";
	cin >> n;
	while(n % 2 == 0){
		cout << "ta sondgoi too oruulna uu: ";
		cin >> n;
	}
	
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if(j == 0 && i < n / 2 || i == n / 2 || j == n / 2 || i == n - 1 && j < n / 2 || i == 0 && j > n / 2 || j == n - 1 && i > n / 2){
				cout << "* ";
			} else cout << "  ";
		}
		cout << endl;
	}
}
