#include<iostream>

using namespace std;

int pal(int i){
	int s = 0, y, k;
	k = i;
	while(k > 0){
		y = k % 10;
		s = s * 10 + y;
		k/= 10;
	}
	if(s == i) return 1;
	else return 0;
}
int main(){
	
	int i, n;
	
	cin >> n;
	
	for(i = 1; i < n; i ++){
		if(pal(n - i) == 1){
			cout << n - i << endl;
			break;
		} else {
			if(pal(n + i) == 1){
				cout << n + i << endl;
				break;
			}
		}
	}
}
