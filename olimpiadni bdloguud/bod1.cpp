//huudasni dugaar oloh
#include<iostream>

using namespace std;

int main(){
	int n, k, s = 1;
	
	cout << "1 huudsan dah moriin toog ogno uu: ";
	cin >> n;
	cout << "heddeh moriig shalgahiig husej bna: ";
	cin >> k;
	while(k > n){
		k -= n;
		n += n;
		s ++;
	} 
	cout << s << "	" << k << endl;
}
