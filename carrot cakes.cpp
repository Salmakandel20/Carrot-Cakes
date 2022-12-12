#include<iostream>
#include<Algorithm>
using namespace std;
int main(){
	int n,t,k,d,num_bake_group,oven1=0,oven2;
	cin>>n>>t>>k>>d;
   num_bake_group=(n+k-1)/k;
   oven2=d;
   for(int i=0;i<num_bake_group;i++){
   	if(oven1<=oven2) oven1+=t;
   	else oven2+=t;
   }
    if(max(oven1,oven2)<num_bake_group*t)	cout<<"YES";
    else cout<<"NO";
}
