#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char a[100];
	gets(a);
	int count = 0;
	for(int i = 0; i < strlen(a); i ++){
		for(int j = 0; j < strlen(a); j ++){
			if(a[i] == a[j] && a[i] != ' ' && j != i){
				count ++;
			}
		}
		if(count == 0){
			cout << a[i] << " ";
		}
		count = 0;
	}
	return 0;
}
