#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char n[100];
	int i;
	cin >> n;
	for(i = 0; i < strlen(n); i ++){
		cout << (int)n[i] << endl;
	}	
}
