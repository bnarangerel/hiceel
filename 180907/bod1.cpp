#include<iostream>

using namespace std;

int prime(){
	int j, i;
	for(i = 100; i < 997; i ++){
		j = 2;
		while(i % j != 0){
			j ++;
		}
		if(i == j){
			cout << i << "	"  ;
		}
	}
	return i;
}
int main(){
	int i;
	
	cout << prime() ;

	return 0;
	
}
