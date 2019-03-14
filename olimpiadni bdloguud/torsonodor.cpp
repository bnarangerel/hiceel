#include<iostream>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if(a > 29){
		if(b > 11){
			cout << a + 2 - 30 << " " << 1 << " " << c + 1 << endl;
		} else {
			cout << a + 2 - 30 << " " << b + 1 << " " << c << endl;
		}
	} else {
			cout << a + 2 << " " << b << " " << c << endl;
	}
}
