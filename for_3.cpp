#include <iostream>
using namespace std;

int main(){

    int n;
    cin>> n;

    for(int i= 0; i< n; i++){
        if(i < n/2) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout<<endl;
        }
        else{
            for (int j = i; j>0; j--) {
                cout << "*";
            }
            cout<<endl;
        }


    }


    return 0;
}