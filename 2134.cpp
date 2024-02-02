#include <bits/stdc++.h>

using namespace std;
vector<int> sz;
vector<int> qk;
bool san(int s){
    if (s<=1) return false;
    double m=sqrt(s);
    for (int i=2;i<=m;i++){
        if (s%i==0) return false;
    }
	sz.push_back(s);

    return true;
}
int main(){
    int b;
    cin>>b;
    for (int i=0;i<10000;i++){
        san(i);
    }
	for (int i=0;i<=sz.size();i++){
		for (int j=0;j<=sz.size();j++){
			if(sz[i]+sz[j]==b){
                qk.push_back(sz[i]*sz[j]);
//				cout<<"###"<<sz[i]<<"  "<<sz[j]<<endl;
			}
		}
	}
    sort(qk.begin(),qk.end());
    reverse(qk.begin(),qk.end());
    cout<<qk[0];
//    for(int p:qk) cout<<p<<endl;
//	cout<<endl<<sz.size()<<endl;

}