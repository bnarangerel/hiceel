#include<iostream>

using namespace std;

int main(){
	int i, j = 0, s, y, k, h = 0;
	
	for(i = 2; i < 1000; i += 10){
		y = i;
		k = i;
		while(y > 0){
			y /= 10;
			j ++;
		}
		k /= 10;
		for(h = 0; j > h; h ++){
			s = 2 * 10;
		}
		s = s + k;
		if(i * 2 == s){
			cout << i << "	" << s << endl;
		}
	}
}
