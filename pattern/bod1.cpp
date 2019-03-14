#include<iostream>

using namespace std;

int main(){
	int i, j;
	for(i = 0; i < 5; i ++){
		for(j = 0; j < 5; j ++){
			if(j == 0 || j == 1 || j == 4 || j == 3 || i == 2){
				cout << "*";
			}else{
				cout << " " ;
			}
		}
		cout << endl;
	}
	
}
