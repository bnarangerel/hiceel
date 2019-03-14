#include<iostream>

using namespace std;

int main(){
	int i, n, j, s = 1, sum = 0;
	
	cin >> n;
	
	for(i = 1; i <= n; i ++){
		for(j = 1; j <= i; j ++){
			s = s * j;
		}
		sum = sum + s;
	}
	
	cout << sum << endl;
}
