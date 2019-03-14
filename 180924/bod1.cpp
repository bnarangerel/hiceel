#include<iostream>

using namespace std;

int main(){
	int n, i, k, y, s, h;
	
	cin >> n;
	
	cout << " 2 " ;
	
	for(i = 1; i < n; i ++){
		s = 0;
		k = i;
		while(k > 0){
			y = k % 10;
			k /= 10;
			s = s * 10 + y;
		}
		if(i == s){
        	for (int l = 2; l <= i; l ++){
       	    	if (i % l == 0) {
					break;
					}else{
						if (i == l + 1)
       	 		        cout << i << " ";
					} 

        		} 
  			}
		}
	}

