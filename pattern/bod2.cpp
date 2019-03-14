#include<iostream>

using namespace std;

int main(){
	int i, j, n, p;
	cin >> n;
	n = n * n;
	p = n / 3;
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if(p > j &&  p > i ||n - p <= j && p > i || p > j && n - p <= i || n - p <= i && n - p <= j){
				if(i == j || i + j == n - 1){
					cout << "1";
				} else {
					cout << "0";
				}
			}else{
			9
					cout << ".";
				
			}
		}
		cout << endl;
	}
	
}
