#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	char a[100], b[100];
	int i, j, c, f, g = 0, s = 0;
	
	cin >> a;
	cin >> b;
	
	c = strlen(b);
	int d[c], p, max;
	
	for(i = 0; i < strlen(a); i ++){
		for(j = 0; j < strlen(b); j ++){
			if(a[i] == b[j]){
				d[s] = i;
				s ++;
			}
		}
	}
	for(i = 0; i < s; i ++){
		max = d[0];
		p = 0;
		for(j = 1; j <= s - i - 1; j ++){
			if(max < d[j]){
				max = d[j];
				p = j;
				g = 1;
			}
			if(g == 1){
				cout << "no" << endl;
				break;
			}
		}
		f = d[s - 1 - i];
		d[s - 1 - i] = d[p];
		d[p] = f;
	}
	if(g == 0){
		cout << "yes" << endl;
	}
}
/*
		if(s == c){
			cout << "yes" << endl;
		} else {
			cout << "no " << endl;
		}*/
