#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char n[100];
	int i, a[100], c = 0, l = 0, s = 0;
	cin >> n;
	for(i = 0; i < strlen(n); i ++){
		c = 0;
		for(int j = 48; j < 58; j ++){
			if((int)n[i] == j){
				a[l] = c;
				c ++;
				l ++;
			} else {
				c ++;
			}
		}
		if((int)n[i] == 47){
			
		}
	}	
}
