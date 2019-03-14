#include<iostream>

using namespace std;

int main(){
	int n, j, s, k, y, p, i;
	
	cin >> n;
	
	for(i = 1; i < n; i ++){
		s = 0;
		k = i;
		while(k > 0){
			y = k % 10;
			k /= 10;
			s = s * 10 + y;
		}
		if(i == s){
			j = 2;
			for(j = 2; i % j != 0; j ++){
				p = p + j;
			}
			if(p == i){
					cout << i << " " ;
			}
				
		
			}
		}
	}
