#include<iostream>

using namespace std;

int main(){
	int i, n, y, j = 0, a, u, w;
	
	cout << "Ta toogoo oruulna uu:" ;
	cin >> n;
	
	a = n;
	
	while(n > 0){
		y = n % 10;
		n = n / 10;
		u = n % 10;
		if(y == n){
			j ++;
			w = y;
		}
	}
	cout << "tanii oruulsan " << a << " too n dah hamgiin ih davhtsaj bga too bol : " << w << " bna." << endl;
	
	return 0;
}
