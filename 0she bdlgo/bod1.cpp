#include<iostream>

using namespace std;

int main(){
	int *pn, n, i, mini;
	cin >>n;
	int a[n];
	
	for(i = 0; i < n; i ++){
		cin >> a[i];
	}
	mini = a[0];
	for(i = 1;i < n; i ++){
		if(mini> a[i]){
			mini = a[i];
		}
	}
	pn = &mini;
	cout << &pn << endl; 
	
}
