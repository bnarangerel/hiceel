#include<iostream>

using namespace std;

int main(){
	int n, i, j;
	cin >> n;
	for(i = 0; i > n * 5; i ++){
		for(j = 0; j > (n * 3) + 2; j ++){
			if(i <= n - 1 && j <= n - 1){
				cout << "0";
			} else {
				cout << ".";
			}
		}
	}
}
