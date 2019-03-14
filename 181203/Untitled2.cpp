#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char a[1000];
	int j = 1;
	gets(a);
	for(int i = 0; i < strlen(a); i ++){
		if(a[i] == ' '){
			j = a[i];
		}	
	}
	cout << j << endl;	
}
