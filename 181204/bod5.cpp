#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char a[100];
	int i, b[6];
	gets(a);
	for(i = 0; i < 6; i ++) b[i] = 0;
	for(i = 0; i < strlen(a); i++){
		if(a[i] == 'a'){
			b[0] ++;
		} else {
			if(a[i] == 'e'){
				b[1] ++;
			} else{
				if(a[i] == 'i'){
					b[2] ++;
				} else {
					if(a[i] == 'o'){
						b[3] ++;
					} else {
						if(a[i] == 'y'){
							b[4] ++;
						} else {
							if(a[i] == 'u') b[5]++;
						}
					}
				}
			}
		}
	}
	if(b[0] > 0) cout << "a=" << b[0] << endl;
	if(b[1] > 0) cout << "e=" << b[1] << endl;
	if(b[2] > 0) cout << "i=" << b[2] << endl;
	if(b[3] > 0) cout << "o=" << b[3] << endl;
	if(b[4] > 0) cout << "y=" << b[4] << endl;
	if(b[5] > 0) cout << "u=" << b[5] << endl;
	return 0;
}
