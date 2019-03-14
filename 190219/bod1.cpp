#include<iostream>

using namespace std;

int main(){
	int n, i, j, s = 1, p = 2;
	cin >> n;
	int a[n][n];
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if(i == j || i + j == n - 1){
				if(s < 10){
					cout<< " " << s << " ";
				} else {
					cout << s << " ";
				}
				s += 2;
			} else {
				if(p < 10){
					cout << " " << p << " ";
				} else {
					cout << p << " ";
				}				
				p += 2;
			}
		}
		cout << endl;
	}
}
