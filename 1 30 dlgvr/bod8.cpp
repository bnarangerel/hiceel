#include<iostream>

using namespace std;

int main(){
	int i, y, z, n;
	for(i = 10; i < 100; i ++){
		y = i % 10;
		n = i;
		n /= 10;
		z = n * 100 + y;
		if(i * 9 == z){
			cout << i << " " << z << endl;
		}
	}
}
