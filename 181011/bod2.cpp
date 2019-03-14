//01234 5 ORONTOI TOO HEDiiG ZOHIOJ BOLOH VE
#include<iostream>

using namespace std;

int main(){
	int i, j, a[5], y, h, l, s = 0; 
	
	for(h = 0; h < 5; h ++){
		cin >> a[h];
	}
	for(i = 10000; i < 100000; i ++){
		int k = 0;
		h = 0;
		j = i;
		l = j % 10;
		if(l != 0){
			while(j > 0){
				y = j % 10;
				if(y == a[h] || y == a[h + 1] || y == a[h + 2] || y == a[h + 3] || y == a[h + 4]){
					k ++;
				}
				if(k == 5){
					cout << i << " " ;
					s ++;
				}
				j /= 10;
			}
		}
	}
	cout << "shirheg " << s << endl;
}
