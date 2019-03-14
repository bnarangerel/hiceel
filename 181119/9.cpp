#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string a;
	int t = 0, s = 0;
	getline(cin, a);
	for(int i = 1; i < a.length(); i ++){
		if(a[i] == ' ' and a[i - 1] != ' '){
			s++;
			if(s % 2 != 0){
				for(int j = t; j <= i -1; j ++){
					cout << a[j];
				}
				
				
			}
			cout << " ";
		}
		if(a[i-1] == ' ')t = i - 1;
	}
	return 0;
}
