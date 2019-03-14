#include<iostream>

using namespace std;

int prime(int a){
	int i, j, y, s, h;
	for(i = 2; i <= a; i ++){
		if(a % i == 0){
			break;
		} else {
			if (a == i + 1){
				cout << a << " + " << "0" << " = " << a << endl; 
			} else {
				for(j = 2; j < a; j ++){
					for(y = 2; y <= j; y ++){
						if(j % y == 0){
							break;
						} else {
							if(j == y + 1){
								s = a - j;
								for(h = 2; h <= s; h ++){
									if(s % h == 0){
										break;
									} else {
										if(s == h + 1){
											cout << s << " + " << j << " = " << a << endl;
										}
									}
								}
							}	
						}
					}
				}
			}
		}
	} 
}

int main(){
	int a, i, k, s;
	cin >> a;
	
	k = prime(a);

}
