#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, y, z, k, l, m;
	cin >> n;
	y = 2 * n + 3;
	z = n + 7;
	l = y;
	m = z;
	while(y != z){
		y = abs(y - z);
		z = abs(z - y);
	}
	k = y;
	cout << "hieh: " << k << endl;
	cout << "hbeh: " << (l * m)/k << endl;
	 
}
