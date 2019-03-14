#include<iostream>

using namespace std;

int main(){
	int a, b, i, s, k, y;
	
	cin >> a >> b;
		for(i = a; i < b; i ++){
		s = 0;
		k = i;
		while(k > 0){
			y = k % 10;
			k /= 10;
			s = s * 10 + y;
		}
		if(i == s){
				cout << i << endl;
		}
	}
}
