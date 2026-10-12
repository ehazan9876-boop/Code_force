#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
int a,b;
cin>>a>>b;
int arr[a];
for(int i=0; i<a;i++){
    cin>>arr[i];
}
int counts=0;
for(int i=0; i<a;i++){
    if(arr[i]==b){
        counts++;
    }
}
if(counts==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}


return 0;
}

