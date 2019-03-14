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
	int i, y = 0, s, k, j;
	for(i = 2; y < 100; i ++){
		j = i;
		s = 0;
		while(j > 0){
			k = j % 10;
			s = s * 10 + k;
			j /= 10;
		}
		if(anh(s) == 1){
			y ++;
			cout << y << " => " << i << endl;
		}
	}

}
