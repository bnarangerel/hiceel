#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string a;
	int i, j, n, c[1], y, x = 0;
	getline(cin, a);
	n = a.length();
	for(i = 0; i < n; i ++){
		if(a[i] == ' '){
			c[x] = i;
		}
	}
	for(i = 0; i < c[0]; i ++){
		y = 0;	
		for(j = c[0]; j < n; j ++){
			if(a[i] == a[j]){
				a[j] = ' ';
				y ++;
			} 
		}
		if(y > 0 && y < 2){
			cout << a[i] << " ";
		}
	}
}
