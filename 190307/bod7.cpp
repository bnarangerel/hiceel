#include<iostream>

using namespace std;

int main(){
	int n, s;
	cin >> n;
	s = (n % 10) * 1000 + (n / 10) % 10 * 100 + (n / 100) % 10 * 10 + (n / 1000);
	cout << "unen bol 0 ugui bol durin too grna" << endl;
	cout << "pal too mon eseh " << s - n << endl; 
}
