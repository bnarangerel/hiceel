#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char a[10000];
	int j = 0, y = 0;
	gets(a);
	for(int i = 0; i < strlen(a); i ++){
			if(a[i] == 'a'){
				j ++;
			}	
			y ++;
	}
	cout << j << endl;	
}
