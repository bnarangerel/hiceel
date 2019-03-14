#include<iostream>

using namespace std;

int main(){
	int *pn, *pc, j, a, s, b;
	cin >> a >> b;
	s = a + b;
	pn = &s + a;
	cout << pn << endl;  
	cout << pn + a << endl;  
}
