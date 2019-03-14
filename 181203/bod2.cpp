#include<iostream>

using namespace std;

int anh(int n){
	int i, y = 0;
	if(n % 2 == 0 || n == 1){
		return 0;
	} else{
		for(i = 3; i < n; i ++){
			if(n % i == 0){
				return 0;
				break;
			}
		}
		if(y == 0){
			return 1;
		}
	}
}
int main(){
	int i,s, k, l = 0, j;
	for(i = 1000; i < 10000; i ++){
		j = i / 100;
		s = 0;
		while(j > 0){
			k = j % 10;
			s += k;
			j /= 10;
		}
		if(anh(s) == 1){
			cout << i << endl;
			l ++;
		}
	}
	cout << l << " shirheg" << endl;
	return 0;
}
