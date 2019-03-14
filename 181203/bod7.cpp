//strrev-erguuldeg
// box = strvev(a);
#include<iostream>
#include<cstring>

using namespace std;

int pal(char a[1000]){
	char b[1000], i = 0;
	for(int x = strlen(a) - 1; x > 0; x --){
		b[i] += a[x];
		i ++;
	}
	if(b[1000] == a[1000]){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	char a[1000];
	char b[1000];
	gets(a);
	strcpy(b, strrev(a));



}
