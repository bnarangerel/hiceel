#include<iostream>

using namespace std;

int anh(int n){
	int i, y = 0;
	if(n % 2 == 0){
		return 0;
	} else{
		for(i = 3; i < n; i ++){
			if(n % i == 0){
				return 0;
				break;
			}
		}
		if(y == 0){
			return 1;
		}
	}
}
int main(){
	int i;
	for(i = 2; i < 200; i ++){
		if(anh(i) == 1 && anh(i + 2) == 1){
			cout << i << "	"<< i + 2<< endl;
		}
	}
}
