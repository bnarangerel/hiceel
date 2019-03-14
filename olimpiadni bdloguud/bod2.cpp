//bersiin ideh nohtsol
#include<iostream>

using namespace std;

int main(){
	int a, b, c, d;
	
	cin >> a >> b;
	cin >> c >> d;
	
	if(a == c || b == d || a + b == c + d || d - c == b - a) cout << "yes" << endl;
	else cout << "no" << endl;
		
}
