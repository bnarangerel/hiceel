#include<iostream>

using namespace std;

int main(){
	int n = 10, a[n], i, j = 0, y = 0;
	
	for(i = 0; i < n; i ++){
		cout << i + 1 << "dh hiceeliin dung oruulna uu: " ;
		cin >> a[i];
		while(a[i] > 5){
			cout << "suragciin dun 1-5 iin hoorond bh ystoi anhaarna uu. " << i + 1 <<  "dh hiceeliin dung dahin dung oruulna uu:" ;
			cin >> a[i];
		}
	}
	for(i = 0; i < n; i ++){
		if(a[i] == 5){
			j ++;
		} else {
			if(a[i] == 4){
				y ++;
			}
		}
	}
	
	cout << "5 onootoi tentsuu hiceeliin too: " << j << endl;
	cout << "4 onootoi tentsuu hiceeliin too: " << y << endl;
	
	return 0;
}
