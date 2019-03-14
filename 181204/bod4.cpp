#include<Iostream>
#include<cstring>

using namespace std;

int main(){
	char a[100];
	int i, max, y = 0, l = 0, b[10];
	gets(a);
	for(i = 0; i < strlen(a); i++){
		if(a[i] != ' '){
			y ++;
		} else {
			b[l] = y;
			y = 0;
			l ++;
		}
	}
	max = b[0];
	for(i = 1; i < l; i ++){
		if(max < b[i]){
			max = b[i];
		}
	}
	cout << max << endl;
}
