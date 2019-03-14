#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));
	int n, i, y;
	cout << "toogoo oruulna uu: ";
	cin >> n;
	int a[n + 1];
	for(i = 1; i <= n; i ++){
		cout << i << "=" ;
		cin >> a[i];
	}
	y = rand() % n + 1;
	cout << y << " element: "<< a[y] << "=" << sqrt(a[y]) << endl;
}
