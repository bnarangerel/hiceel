#include<iostream>


using namespace std;

int main(){
	int i, n, m, j,y, c;
	cin >> n >> m;
	int a[n];
	int b[m];
	for(i = 0; i < n; i ++){
		cin >> a[i];
	}	
	for(i = 0; i < m; i ++){
		cin >> b[i];
	}
	for(i = 0; i < n; i ++){
		y = 0;	
		for(j = 0; j < m; j ++){
			if(a[i] == b[j]){
				y ++;
				
			} 
		}
		if(y == 0){
			cout << a[i] << " ";
		}
	}
}
/**/
