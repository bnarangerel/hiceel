#include<iostream>

using namespace std;

int main(){
	int i, s, y, x, z, p, j, a[100];
	for(i = 1; i < 1000000; i ++){
		j = i * i;
		y = 0;
		x = 0;
		p = 0;
		z = 0;
		y = 0;
		while(j > 0){
			a[y] = j % 10;
			j /= 10;
			y ++;
		}
		for(j = 0; j < y; j ++){
			if(a[j] == 0){
				y = 1;
			}else{
				if(a[j] == 2){
					z = 1;
				} else {
					if(a[j] == 3){
						x = 1;
					} else {
						if(a[j] == 5){
							p = 1;
						}
					}
				}
			}
		}
		if(p == 1 && x == 1 && y == 1 && z == 1){
			cout << i << "=" << i * i << endl;
			break;
		}
	}
}
