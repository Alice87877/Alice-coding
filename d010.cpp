//https://zerojudge.tw/ShowProblem?problemid=d010
#include <iostream>

using namespace std;

int main(){

    int n,i,s;
    while(cin>>n){
    s=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            s=s+i;
    }
    if(s>n){
        cout<<"�ռ�\n";
    }else if(s<n){
        cout<<"����\n";
    }else
        cout<<"������\n";
    }
    return 0;
}
