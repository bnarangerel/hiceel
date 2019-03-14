#include<iostream>

using namespace std;

int main(){
	int a, d, n, s, sum = 0;
	
	cout << "ehni element: " ;
	cin >> a ;
	cout << "ylgvr n: ";
	cin >> d;
	cout << "hddh element: ";
	cin >> n;
	for(int i = 1; i <= n; i ++){
		s = a + (d * (n - i));
		sum += s;
	}
	cout << "niilbr n: " << sum << endl;
}
