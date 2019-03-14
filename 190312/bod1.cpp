#include<iostream>

using namespace std;

int main(){
	int i, j, y = 65, n;
	cin >> n;
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if(i >= j){
				if(y > 90) y = 65;
				cout << (char)y;
				y ++;
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
