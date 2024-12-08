#include<bits/stdc++.h>
using namespace std;

int main(){
     int a, b,c;
     cin>>a>>b>>c;
     long long int mx;
     long long int min;
     if(a >= b && a >= c){
        mx = a;
     }
     else if(b >= a && b >= c){
        mx = b;
     }
     else{
        mx = c;
     }

     if(a <= b && a <= c){
        min = a;
     }
     else if(b <= a && b <= c){
        min = b;
     }
     else{
        min = c;
     }
     cout<<min<<" "<<mx<<endl;

    return 0;
}