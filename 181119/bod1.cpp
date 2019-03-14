#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));
	int n, i, y, b;
	int a[20];
	for(i = 0; i < 20; i ++){
		a[i] = rand() % 50 + 1;
		cout << i + 1 << "=" << a[i] << endl;
	}
}
