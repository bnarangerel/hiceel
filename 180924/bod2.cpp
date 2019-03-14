#include<iostream>

using namespace std;

int main(){
	int n, i, s, k, y;
	cin >> n;
	
	for(i = 1; n > i; i ++){
		k = i;
		s = 0;
		while(k > 0){
			y = k % 10;
			s = s * 10 +y;
			k /= 10;
		}
		cout << s << "	" ;
	}
}
