#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string a;
	getline(cin, a);
	int b, i;
	for(i = 0; i < a.length(); i ++){
		if(a[i] == '-'){
			a[i] = '_';
		}
	}
	cout << a << endl;
}
