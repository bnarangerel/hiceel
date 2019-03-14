#include<iostream>

using namespace std;

int main(){
	int n, k, s = 0, j, q;
	cin >> n;
	
	s = n % 10 + n / 10 % 10 + n /100 % 10;
	n /= 1000;
	q = n % 10 + n / 10 % 10 + n /100 % 10;
	j = s - q;
	cout << j + 1<< endl;
}
