#include<iostream>

using namespace std;

int main(){
	int i, j, y, b, a[4], k = 0;
	for(i = 1111; i <= 5555; i ++){
		y = i;
		b = 0;
		j = 0;
		while(y > 0){
			a[j] = y % 10;
			y /= 10;
			j ++;
		}
		for(j = 0; j < 4; j ++){
			if(a[j] == 1 || a[j] == 2 || a[j] == 3 || a[j] == 4 || a[j] == 5){
				b ++;
			}
		}
		if(b == 4){
			cout << i << endl;
			k ++;
		}
	}
	cout << k << " shirheg bna. " << endl;
}
