#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));
	int n, i, b, y;
	cout << "toogoo oruulna uu: ";
	cin >> n;
	int a[n + 1];
	for(i = 1; i <= n; i ++){
		cout << i << "=" ;
		cin >> a[i];
	}
	y = rand() % n + 1;
	b = rand() % n + 1;
	cout << y << "r element bolon "<< b << "r elementiin arifmatik dundj n: " << (a[y] + a[b]) / 2 << endl;
}
