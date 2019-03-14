#include<iostream>

using namespace std;

int anh(int n, int i){

	if(i <= 0){

		return 0;
	}
	if(i == 1){
	
		return 1;
	} else {
		if(n % i == 0){
		
			return 0;
		} else {
			return anh(n, i - 1);
		}
	}	
}
int main(){
	int i, n, y, s, sum, j = 0, a[1000];
	cin >> n;

	for(i = 2; i <= 1000; i ++){
		y = i;
		sum = 0;
		while(y > 0){
			s = y % 10;
			sum += s; 
			y /= 10;
		}	
		
		if(anh(sum, sum / 2) == 1){
			a[j] = i;
			j ++;
		}
	}
	for(j = 0; j < n; j ++){
		cout << a[j] << endl;
	}
	return 0;
}
