#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	ll flag =0;
	ll nn=0;

	while(cin>>n){
		ll a[100000]={0};
		flag=0;
		nn++;
		vector<ll>v;
			for(ll i=0;i<n;++i){
				ll t;
				cin>>t;
				v.push_back(t);
			}

			for(ll i=0;i<n;++i){
				for(ll j=i;j<n;++j){
					ll sum=v[i]+v[j];
			
					if(a[sum]!=0){
						flag =1;
						break;
					}else{

						a[sum]=1;
					}
				}
			}
			if(flag==1){
				cout<<"Case #"<<nn<<": It is not a B2-Sequence."<<endl;

			}
			else{
				cout<<"Case #"<<nn<<": It is a B2-Sequence."<<endl;
			}
	}


}