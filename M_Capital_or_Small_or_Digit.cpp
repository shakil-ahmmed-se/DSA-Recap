#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a > 47 && a < 58 ){
        cout<<"IS DIGIT"<<endl;
    }
    else if(( a > 64 && a < 91) || (a  > 96 && a < 123) ){
        cout<<"ALPHA"<<endl;
        if( a > 64 && a < 91 ){
            cout<<"IS CAPITAL"<<endl;
        }
        else{
            cout<<"IS SMALL"<<endl;
        }

    }
    return 0;
}