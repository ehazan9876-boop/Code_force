#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,num1=0,num2=0;
cin>>a>>b>>c;

for(int i=1; i<=a; i++){
    int gun = b*i;
    if(gun==c){
        num1=num1+1;
    }
    else{
        num2=num2+1;
    }
}
if(num1==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



return 0;
}
