#include<iostream>

using namespace std;

int main(){
	int n, i, j, k = 1, t, a[10];
	for(i = 0; i < 10; i ++){
		cout << i + 1 << " - " ;
		cin >> a[i];
	}
	
	for(i = 1; i < n; i ++){
		t = a[i]; 
		for(j = i - 1; t < a[j] && j >= 0; j --){
			a[j + 1] = a[j];
			k ++;
		}
		a[j + 1] = t;
	}
	cout << "sortlgdsn baidal" << endl;
	for(i = 0; i < n; i ++){
		cout << i + 1 << " - " << a[i] << endl;
	}
	return 0;
}
