#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
    if(x==0 || x==1)return x;
    for(long long i=2;i<x;i++){
        long long ans=i*i;
        long long anss=(i+1)*(i+1);
        if(ans==x){
                return i;
            }else if(ans<x && anss>x){
                return i;
            }
    }
return 1;
}
int main(){
    cout<<mySqrt(17);
}