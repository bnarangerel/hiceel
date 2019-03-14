#include<iostream>

using namespace std;

int main(){
	int n, j, max, a[n], i;
	
	cout << "hairtsagniiha toog oruulna uu: " ;
	cin >> n;
	
	for(i = 0; i < n; i ++){
		cout << i + 1 << " hairtsagni utgig oruulna uu: " ;
		cin >> a[i];
	}
	max = a[0];
	for(i = 1; i < n; i ++){
		if(a[i] > max){
			max = a[i];
			j = i;
		}
	}
	
	cout << "tanii oruulsan toonuudiin hamgiin ih utga bol " << j + 1 << " hairtsag dah " << max << " bna." << endl;
	
}
