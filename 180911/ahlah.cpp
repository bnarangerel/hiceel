#include<iostream>

using namespace std;

int main(){
    int i, n, y, max;
    cin >> n;
	if(n < 1001){
		for(i = 1; i < n; i ++){
        	max = i % 10;
       		while(i > 0){
           		y = i % 10;
        	    i /= 10;
         	   if(max < y){
        	        max = y ;
        	    }
        	}   
      	  cout << max << endl;     
    	}
	}
    
    return 0;
}
