#include<iostream>

using namespace std;

int main(){
	int n, i, k, b, y, l = 0;
	cout << "toogoo oruulna uu: ";
	cin >> n;
	int a[n + 1];
	cout << "a toog oruulna uu: ";
	cin >> k;
	cout << "b toog oruulna uu: ";
	cin >> b;
	for(i = 1; i <= n; i ++){
		cout << i << "=" ;
		cin >> a[i];
	}	
	cout << "4r togsson = "; 
	for(i = 1; i <= n; i ++){
		y = a[i] % 10;
		if(y == 4){
			cout << i << "=" << a[i] / 2 << "	";
			l ++;
		}
	}
	if(l == 0){
		cout << "baihgui bna." << endl;
	}
	cout << endl << "tegsh utgatai toog tuunii kvdrtaar n, sondgoig n 2 dahin ihesgev." << endl;;
	for(i = 1; i <= n; i ++){
		if(a[i] % 2 == 0){
			cout << i << "="<<  a[i] * a[i] << endl;
		}else {
			cout << i << "="<<  a[i] * 2 << endl;
		}
	}
	cout << "index n tegsh dugaartaig n b toogoor hasagduulav." << endl;
	for(i = 1; i <= n; i ++){
		if(i % 2 == 0){
			cout << i << "="<<  a[i] - b << endl;
		}		
	}
	cout << "tegsh utgataig n a toogoor ihesgev." << endl;
	for(i = 1; i <= n; i ++){
		if(a[i] % 2 == 0){
			cout << i << "="<<  a[i] + k << endl;
		}		
	}
}
