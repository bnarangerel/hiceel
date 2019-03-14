#include<iostream>

using namespace std;

int fact(int n){
	int i, s = 1;
	for(i = 1; i <= n; i ++){
		s *= i;
	}
	return s;
}
int main(){
	int n, m, k;
	cout << "davhar:" ;
	cin >> n;
	cout << "ongoni too:" ;
	cin >> m;
	k = fact(m);
	cout << "bolomj:" << k/(fact(n) * fact(m - n)) * n + m << endl;
}
