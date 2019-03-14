#include<iostream>
using namespace std;

int main(){
	int i, j, s;
	
	for(i = 100; i < 498; i ++){
		j = 498 - i;
		if(j > 99){
			if(j > i){
				s = j / i;
				if(s > 0){
					if(s % 5 == 0){
						cout << i << "	"<< j << endl;
					}	
				}
			} else {
				s = i / j;
				if(s > 0){
					if(s % 5 == 0){
						cout << i << "	"<< j << endl;
					}	
				}
			}
		}
	}
}
