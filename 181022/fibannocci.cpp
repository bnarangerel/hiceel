#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	cout << (pow(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n),n)) / sqrt(5) << endl;
}

