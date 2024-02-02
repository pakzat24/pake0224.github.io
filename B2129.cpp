#include <bits/stdc++.h>

using namespace std;

double m(int a,int b,int c){
    int m;
    if (a>b){
        m=a;
    }else {
        m=b;
    }

    if (m>c){
        return m;
    }else{
        m=c;
    }
    return double(m+0.0);
}
double x(int a,int b,int c){
    double am=m(a+b,b,c)*m(a,b,b+c);
    double x=double(m(a,b,c))/am;
    return x;
}
int main(){
//    int x=max(5,8,2);
    int c1,c2,c3;
    cin>>c1>>c2>>c3;
    cout<<fixed<<setprecision(3)<<x(c1,c2,c3);
}