#include<iostream>

using namespace std;

int anh(int n){
	int i, y = 0;
	if(n % 2 == 0){
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
	int i, y, s, k, l = 0, j;
	for(i = 1000; i < 10000; i ++){
		j = i;
		s = 0;
		y = 0;
		while(y < 3){
			k = j % 10;
			s += k;
			j /= 10;
			y ++;
		}
		if(anh(s) == 1){
			cout << i << endl;
			l ++;
		}
	}
	cout << l << " shirheg" << endl;
	return 0;
}
