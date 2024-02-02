#include <bits/stdc++.h>

using namespace std;

int main(){
//总共有i户人家
//我家门牌号为m
//所有人门派号之和为 s=i(i+1)/2
//其余人家门牌号之和为 s-m
//  s-m-2*m=n
//  s-3*m=n
//  s-n=3*m
//  m=(s-n)/3
//  m=3*s-3*n
    long long int m,n;
    cin>>n;
    for (long long int i=0;i<=100000;i++){
        long long int s=i*(i+1)/2;
        m=(s-n)/3;
        if(3*m+n==s && m>0 && m<=i){
            cout<<m<<" "<<i;
            break;
        }
    }
}