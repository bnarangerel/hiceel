#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string o;
	getline(cin, o);
	for(int i = 0; i < o.length(); i ++){
		if(isalpha(o[i])){
			cout << o[i];
		} else {
			if(o[i] == ' '){
				cout << " ";
			}
		}
	}
}
