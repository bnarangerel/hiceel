#include<iostream>

using namespace std;

int main(){
	int i,j;
	for(i = 0; i < 8; i ++){
		for(j = 0; j < 8; j ++){
			if((i + j) % 2 == 0){
				cout << "*";
			} else {
				cout << "#";
			}
		}
		cout << endl;
	}
}
