#include<iostream>

using namespace std;

int main(){
	int i, n, j, f, max, b, c;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i ++){
		cin >> a[i];
	}
	for(i = 0; i < n; i ++){
		max = a[0];
		b = 0;
		for(j = 1; j <= n - i - 1; j ++){
			if(max < a[j]){
				max = a[j];
				b = j;
			}
		}
		f = a[n - 1 - i];
		a[n - 1 - i] = a[b];
		a[b] = f;
	}
	for(i = 0; i < n; i ++){
		if(a[i] != a[i + 1]){
			cout << a[i] << endl;
		}
	}
}
/*	for(i = 0; i < n; i ++){
		y = 0;
		for(j = i + 1; j < n; j ++){
			if(a[i] == a[j]){
				y ++;
				
			} 
		}
		if(y > 0){
			cout << a[i] << " ";
		}
	}*/
