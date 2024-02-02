#include<iostream>


using namespace std;


int main()
{
	string name;
	float giradus;
	int n,yutal,a=0;
	cin >>n;
	for (int i=0;i<n;i++){
		cin>>name>>giradus>>yutal;
		if (giradus>=37.5&&yutal==1){
			cout<<name<<endl;
			a++;
		}
	}

	cout<<a;
}
