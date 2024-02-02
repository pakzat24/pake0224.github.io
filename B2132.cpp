#include <bits/stdc++.h>

using namespace std;

bool san(int s){
    if (s<=1) return true;
    double q=sqrt(s);
    for (int i=2;i<=q;i++){
        if (s%i==0){
            return false;
        }
    }

    return s;

}
bool p=true;
int main(){
    int num;
//    int k=0;
    cin>>num;

    for (int i=0;i<num;i++){
        if (san(i-2)&&san(i)){
            cout<<i-2<<" "<<i<<endl;
//            k++;
            p=false;
        }
    }
    if (p){
        cout<<"empty";
    }

}