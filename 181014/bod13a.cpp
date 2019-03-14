#include<iostream>

using namespace std;

int main(){
	int n, m, i, j, s = 0;
	
	
	cin >> n >> m;
	
	int a[n][m];
	
	for(i = 0; i < n; i ++){
		for(j = 0; j < m; j ++){
			cout << "a[" << i << "][" << j << "] - " ;
			cin >> a[i][j];
		}
	}
	for(i = 0; i < n; i ++){
		for(j = 0; j < m; j ++){
			if(i == j){
				s += a[i][j];
			}
		}
	}
	cout <<"niilbr n: " << s << endl;
}
