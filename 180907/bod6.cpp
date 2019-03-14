#include<iostream>

using namespace std;

int main(){
	
	int n, i, b, j;
	
	cout << "hairtsagni toogoo oruulna uu: " ;
	cin >> n;
	int a[n];
	
	for(i = 0; i < n; i ++){
		cout << i + 1 << "r hairtsagni utgig oruulna uu: " ;
		cin >> a[i];
	}
	j = a[0];
	for(i = 0; i < n; i ++){
		cout << i + 1 << "r hairtsagn dh utgig 2 dhin ihesgsn baidal : " << a[i] * 2 << endl;
	}
	cout << endl << endl;
	
	cout << "ta ooriin oruulsan massiviin utgiig hedeer bagasgahiig husej baina ve? toogoo oruulna uu: " ;
	cin >> b;
	for(i = 0; i < n; i ++){
		cout << i + 1 << "r hairtsg dh utgig hussn toogoor tani bagasgasan baidal : " << a[i] - b << endl;
	}
	cout << endl << endl;
	for(i = 0; i < n; i ++){
		cout << i + 1 << "r hairtsg dh utgig hmgin ehni elemented huvaasan baidal: " << a[i] / j << endl;
	}
	
	return 0;
}
