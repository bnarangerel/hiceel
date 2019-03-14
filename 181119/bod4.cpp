#include<iostream>

using namespace std;

int main(){
	int n, i, y, b;
	cout << "toogoo oruulna uu: ";
	cin >> n;
	int a[n];
	for(i = 0; i < n; i ++){
		cout << i + 1 << "=";
		cin >> a[i];
	}
	cout << "20r bagasgasan baidal." << endl;
	for(i = 0; i < n; i ++){
		cout << i + 1 << "=" << a[i] - 20 << endl;
	}
	cout << "suuliin elementeer n urjuulsn baidal." << endl;
	for(i = 0; i < n; i ++){
		y = a[i] % 10;
		cout << i + 1 << "=" << a[i] * y << endl;
	}
	cout << "nemegduuleh toogoo hiine uu: ";
	cin >> b;
	cout << "tanii ogson toogoor ihesgesen baidal." << endl;
	for(i = 0; i < n; i ++){
		cout << i + 1 << "=" << a[i] + b << endl;
	}
}
