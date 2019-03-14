#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
	srand(NULL);
	int n, i, y;
	cout << "toogoo oruulna uu: ";
	cin >> n;
	int a[n + 1];
	for(i = 1; i <= n; i ++){
		cout << i << "=" ;
		cin >> a[i];
	}
	y = rand() % 1 + n;
	cout << y << " element: "<< a[y] << "=" << sqrt(a[y]) << endl;
}
