#include<iostream>

using namespace std;

int main(){
	int n, a, b, c, d, s, k;
	cin >> n;
	a = n % 10;
	b = n / 10 % 10;
	c = n / 100 % 10;
	d = n / 1000;
	s = a + b;
	k = c + d;
	cout << "unen bol 0 ugui bol durin too grna" << endl;
	cout << "=  eseh " << s - k << endl;
}
