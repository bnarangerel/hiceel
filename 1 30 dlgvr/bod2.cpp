#include<iostream>

using namespace std;

int main(){
    int i, y, p, n, j;

    for(i = 10; i < 100; i ++){
        y = i % 10;
        j = i;
        n = i;
        j /= 10;
        p = y * 10 + j;
        if(n * 4.5 == p){
            cout << n << " " << p << endl;
        }
    }
}
