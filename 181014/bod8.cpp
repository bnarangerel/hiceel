#include<iostream>

using namespace std;

int main(){
	int n, i;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++){
		cout << i << " - ";
		cin >> a[i];
	}
	for(i = 1; i < n; i += 2){
		cout << i << " - " << a[i] << endl;
	}
	return 0;
}
