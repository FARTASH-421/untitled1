#include <iostream>
using namespace std;

int main(){
    int num ;
    cin>>num;

    int arr [num];
    int temp;
    cin>>temp;
    arr[0] = temp;

    for(int i=1; i<num; i++){

        cin>>arr[i];
        for(int j=0; j< i; j++){
            if(arr[j] > arr[i]){
                temp= arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }


    }

    for(int i=0; i<num; i++)
        cout<<arr[i]<<", ";


    return 0;
}