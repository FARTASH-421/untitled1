# include <iostream>
#include <string>
using namespace std;

struct Store{
    string pen;
    string pencil;
    string notebook;
    int pen_value;
    int pencil_value;
    int notebook_value;
};


int main(){
    Store s;
    s.notebook_value = 10;
    s.pen_value = 20;
    s.pencil_value = 40;

    int n;
    cin>>n;
    string name;
    int total_p;
    for(int i=0; i<n; i++){
        cin>>name;
        if(name == "pen"){
            total_p += s.pen_value
        }
    }

    return 0;
}
