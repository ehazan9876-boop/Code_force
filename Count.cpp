#include<bits/stdc++.h>
using namespace std;
int main(){
string n;
cin>>n;
int sum=0;
for(int i=0; i<n.length();i++){
        int sub = n[i]-'0';
    sum = sum+sub;
}
cout<<sum<<endl;






return 0;
}


