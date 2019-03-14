#include<iostream>

using namespace std;

int main(){
	int i, n, p, k, j = 0, y, s, sum, a[1000];
	
	cin >> n;
	for(i = 0; i < n; i ++){
		a[i] = 0;
	}
	for(i = 0; i < 1000; i ++){
		y = i;
		sum = 0;
		s = 0;
		while(y > 0){
			s = y % 10;
			sum = sum + s; 
			y /= 10;
		}
		s = 0;
		p = sum;
		while(p > 0){
			k = p % 10;
			s = s * 10 + k;
			p /= 10;
		}
		if(sum == s){
			a[j] = sum;
			j ++;
		}
	}
	for(i = 0; i < n; i ++){
		cout << a[i] << endl;
	}
}
