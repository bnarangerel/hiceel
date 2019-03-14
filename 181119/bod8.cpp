#include<iostream>

using namespace std;

int main(){
	int n, i, j, k, m, l;
	cout << "1 dh toogoo oruulna uu: ";
	cin >> n;
	cout << "2 dh toogoo oruulna uu: ";
	cin >> m;
	int a[n + 1][m + 1];
	for(i = 1; i <= n; i ++){
		for(j = 1; j <= m; j ++){
			cout << i << " " << j << "=";
			cin >> a[i][j];	
		}
	}
	for(i = 1; i <= n; i ++){
		for(j = 1; j <= m; j ++){
			for(k = 1; k <= n; k ++){
				for(l = 1; l <= m; l ++){
					if(a[i][j] == a[k][l]){
						if(i != k || j != l){
							cout << i << " " << j << " = " << k << " " << l << endl;
							return 0;	
						}
					}
				}
			}
		}
	}
}
