#include <iostream>

using namespace std;

int main(){
    int t, t1 = 0, t2 = 1 ,nextterm = 0;
    cout << "Enter the number of terms: " << endl;
    cin >> t;

    for (int i = 1 ; i <= t; ++i ){
        if (i == 1){
            cout << t1 << " ";
            continue;
        }
        if (i == 2){
            cout << t2 << " ";
            continue;
        }
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
        cout << nextterm << " ";
    } 
}