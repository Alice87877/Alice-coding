//https://zerojudge.tw/ShowProblem?problemid=a004
#include <iostream>

using namespace std;

int main(){

    int n;
    while(cin>>n){
        if(n%4==0){
            if((n%100!=0)||(n%400==0)){
                cout<<"�|�~"<<"\n";
            }else{
            cout<<"���~"<<"\n";
            }
        }else{
        cout<<"���~"<<"\n";
        }
    }

    return 0;
}
