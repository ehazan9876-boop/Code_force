#include<bits/stdc++.h>
using namespace std;
int main(){
string a;
getline(cin,a);
int num = a.length();
for(int i=0; i<num; i++){
    if(a[i]=='\\'){
        break;
    }
    cout<<a[i];
}
cout<<endl;

return 0;
}

