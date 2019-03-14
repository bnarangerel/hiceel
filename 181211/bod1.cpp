#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char a[100];
	int i, s = 0, c;
	
	cin >> a;
	
	c = strlen(a);
	
	for(i = 0; i < strlen(a); i ++){
		for(int j = i + 1; j < strlen(a); j ++){
			if(a[i] == a[j]){
				s ++;
			}
		}
	}
	
	cout << "yalgaatai temdegtiin too: "<< c - s << endl;
}
