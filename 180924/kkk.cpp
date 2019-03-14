#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, j, i = 2;
	
	cin >> n;
	
	int k=sqrt(n);
	while(n % 2 == 0){
		cout << 2 << " " ;
		n = n / 2;
	}
	i = 3;
	while(i <= k){
		for(j = 3; j % i != 0; j +=2){
		}
		if(i == j){
			if(n % i == 0){
				cout << i << " " ;
				n = n / i;
			} else {
				i += 2;
			}
		}
	}	
	if(n > 1){
		cout<< n <<endl;
	}
	cout << endl;
	
	return 0;

}
