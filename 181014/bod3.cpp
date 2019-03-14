#include<iostream>

using namespace std;

int anh(int n, int i){
	if(i == 1){
		return 1;
	} else {
		if(n % i == 0){
			return 0;
		} else {
			return anh(n, i - 1);
		}
	}	
}
int main(){
	int n;
	cin >> n;
	if(anh(n, n / 2) == 0){
		cout << "no" << endl;
	} else {
		cout << "yes" << endl;
	}
	return 0;
}
