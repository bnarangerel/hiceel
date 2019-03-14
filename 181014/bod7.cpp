#include<iostream>

using namespace std;

int main(){
	int n, i;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++){
		cout << i + 1 << " - ";
		cin >> a[i];
	}
	for(i = 0; i < n; i ++){
		if(a[i] > 0){
			if(a[i] % 2 == 0){
				cout << i + 1 << " - " << a[i] << endl;
			}
		}
	}
	return 0;
}
