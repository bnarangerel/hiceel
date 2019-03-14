#include<iostream>

using namespace std;

int main(){
	int n, i, j, m;
	cout << "mornii hemjeeg oruulna uu: ";
	cin >> n;
	cout << "baganii hemjeeg oruulna uu: ";
	cin >> m;	
	int a[n][m], s[n];
	for(i = 0; i < n; i ++){
		s[i] = 0;
		for(j = 0; j < m; j ++){
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
			s[i] += a[i][j];
		}
	}
	for(i = 0; i < n; i ++){
		if(s[i] == s[i + 1]){
			cout << i << "	" << i + 1 << endl;
		}
	}
}
