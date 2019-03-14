#include<iostream>

using namespace std;

int main(){
	int n, i, k, s;
	cout << "toogoo oruulna uu: ";
	cin >> n;
	int a[n + 1];
	for(i = 1; i <= n; i ++){
		cout << i << "=";
		cin >> a[i];
	}
	cout << "ta heddugeer elementiig eyreg esehiig shalgahiig husej bna." << endl;
	cin >> k;
	while(k > n){
		cout << "iim element baihgui. dahin hiine uu: " << endl;
		cin >> k;
	}
	if(a[k] > 0){
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
	cout << "ta heddugeer elementiig sondgoi esehiig shalgahiig husej bna." << endl;
	cin >> s;
	while(s > n){
		cout << "iim element baihgui.dahin hiine uu: " << endl;
		cin >> s;
	}	
	if(a[s] % 2 != 0){
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
	if(a[s] > a[k]){
		cout << a[k] << "<" << a[s] << endl;
	} else {
		if(a[s] == a[k]){
			cout << a[s] << "=" << a[k] << endl;
		} else {
			cout << a[k] << ">" << a[s] << endl;	
		}
	}
}
