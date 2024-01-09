#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin>> row >> col;

    int arr[row][col];

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin>>arr[i][j];
        }
    }

    int sum_row = 0, index = 0;
    int temp = 0;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            temp += arr[i][j];
        }
        if(temp > sum_row){
            sum_row = temp;
            index = i;
        }

        temp =0;
    }

    cout<<"index row is: "<< index<<endl;
    cout<<"sum all element row is: "<< sum_row<<endl;
}
