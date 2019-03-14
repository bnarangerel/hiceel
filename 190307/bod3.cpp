#include<iostream>

using namespace std;

int main(){
	int a, b, s, k, c;
	cin >> a >> b;
	s = a * b;
	cin >> c;
	k = s % c;
	cout << "unen bol 0 ugui bol durin too grna" << endl;
	cout << "c toonii davtalt eseh " << s - k << endl;
}
