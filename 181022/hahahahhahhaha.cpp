#include<iostream>

using namespace std;

int main(){
	int l, o, i, k, y, s = 0, j,p, a[4];
	
	for(i = 123; i <= 432; i ++){
		j = i;
		k = 0;
		p = 0;
		while(j > 0){
			 a[k] = j % 10;
			 j /= 10;
			 if(a[k] == 1 || a[k] == 2 || a[k] == 3 || a[k] == 4){
			 	p ++;	
			 }
			 k ++;
		}
		if(p == 3){
			if(a[0] != a[1] && a[0] != a[2] && a[1] != a[2]){
				cout << i << endl;
				s ++;
			}
		}
	}
	cout << s << "shirheg" << endl;
}
