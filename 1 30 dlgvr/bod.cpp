#include<iostream>

using namespace std;

int main(){
	int i, j, b = 1;
	for(i = 0; i < 5; i ++){
		for(j = 0; j < 7; j ++){
			while(i == 0 && j < 5){
				cout << "   " ;
				j ++;
			}
				if(b < 9){
					cout << b << "  " ;	
				} else {
					if(b == 20){
						cout << "'" << b << "'" << " " ; 
						b ++;
					} else {
						cout << b << " ";	
					}
				} 
				b ++;
		}
		cout << endl;
	}
	cout << "zovhon iim tohioldold 20ni odor purew garugt bna" << endl;
}
