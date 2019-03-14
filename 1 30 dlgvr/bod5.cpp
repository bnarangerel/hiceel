#include<iostream>

using namespace std;

int main(){
	int i, j = 0, y, k, h;
	for(i = 0; i < 100; i ++){
		y = i * i;
		h = y;
		j = 0;
		while(y > 0){
			k = y % 10;
			if(k == 3 || k == 0|| k == 5 || k == 2){
				j ++;	
			}
			y /= 10;
		}
		if(j == 4){
			cout << h << "	" << i << endl;
		}
	}
}
