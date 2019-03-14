#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char a[10000];
	int y = 0;
	gets(a);
	for(int i = 0; i < strlen(a); i ++){
			if(a[i] == ' '){
				y = i + 1;
			}
			if(i != y){
				cout << a[i] ;
			}	
	}
}
