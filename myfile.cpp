#include <iostream>
using namespace std;

int main(){
    char str [32] ;
    cin>>str;
    int openPr= 0;
    int closePr =0;
    bool ckeck = false;


    for(int i=0; i < 32; i++) {
        if (str[i] == '(')
            openPr++;
        if(str[i] == ')')
            closePr++;
        if(openPr >= closePr){
            openPr--;
            closePr--;
        }
        if(closePr > openPr){
            ckeck = true;
            break;
        }



    }
    if(ckeck == 0 & openPr == 0 && closePr == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}