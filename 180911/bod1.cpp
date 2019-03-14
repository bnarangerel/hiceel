#include<iostream>

using namespace std;

int main(){

    int mini, i, n, a[n];

    cin >> n;

    for(i = 0; i < n; i ++){
        cin >> a[i];
    }
    mini = a[0];
    for(i = 0; i < n; i += 2){
        if(mini > a[i]){
            mini = a[i];
        }
    }
    cout << mini << endl;
}
