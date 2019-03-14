//HERVEE +  CADVAL = BODOOC
//543210    543210   543210
#include<iostream>

using namespace std;

int main(){
	int i, j, y, k, s, w, d, p;
	for(i = 100000; i < 1000000; i ++){
		j = i;
		int a[6];
		for(y = 0; j > 0; y ++){
			a[y] = j % 10;
			j /= 10;
		}
		if(a[5] != a[4] && a[5] != a[3] && a[4] != a[3] && a[5] != a[2] && a[4] != a[2] && a[3] != a[2] && a[4] == a[1] && a[4] == a[0]){
			k = i;
		} else {
			if(a[5] != a[4] && a[5] != a[3] && a[4] != a[3] && a[5] != a[2] && a[4] != a[2] && a[3] != a[2] && a[4] == a[1] && a[0] != a[1] && a[4] != a[0] && a[3] != a[0] && a[2] != a[0] && a[5] != a[0]){
				w = i;
				d = a[5];
				p = a[3];
			}
		} 
		int s = k + w;
		int b[6];
		for(y = 0; s > 0; y ++){
			b[y] = s % 10;
			s /= 10;
		}
		if(b[5] != b[4] && p == b[3] && b[4] == b[2] && b[4] == b[1] && d == a[0]){
			cout << k << " + " << w << " = " << k + w << endl;
		} 
	}
	
}
/*			if(a[y] != a[y + 1] && a[y] != a[y + 2] && a[y + 1] != a[y + 2] && a[y] != a[y + 3] && a[y + 1] != a[y + 3] && a[y + 2] != a[y + 3] && a[y] == a[y + 4] && a[y] != a[y + 5] )
		}*/
