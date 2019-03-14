#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char a[]="olonlog";
	int i, j;
	for(i = 0; i < strlen(a); i ++){
		for(j = 0; j <= i; j ++){
				cout << a[j];
		}
		cout << endl;
	}
}
