#include<iostream>

using namespace std;

int main(){
	
	int i, j, b, f, n, mini;
	
	cout << "massiviin hmjeeg oruulna uu: " ;
	cin >> n;
	int a[n];
	
	for(i = 0; i < n; i ++){
		cout << i + 1 << " - " ;
		cin >> a[i];
	}
	for(i = 0; i < n; i ++){
		mini = a[0];
		b = 0;
		for(j = 1; j <= n - i - 1; j ++){
			if(mini > a[j]){
				mini = a[j];
				b = j;
			}
		}
		f = a[n - 1 - i];
		a[n - 1 - i] = a[b];
		a[b] = f;
	}
	cout << "sortlogsn baidal." << endl;
	for(i = 0; i < n; i ++){
		cout << i + 1 << " - " << a[i] << endl;
	}
	
	return 0;
}
