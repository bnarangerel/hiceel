#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int i, n, j, c, b = 1;
	cin >> n;
	c = n - 1;
	for(i = 0; i <  c * 2 + 1; i ++){
		for(j = 0; j < n * 2; j ++){
			if(j == n - 1){
				cout << n;
			} else {
				if(i == n - 1 && i != n){
					if(b != n) cout << b; b ++;
				} else cout << " ";
			}
		}
		cout << endl;
	}
}
