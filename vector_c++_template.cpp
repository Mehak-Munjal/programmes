#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v;
   unsigned int n,n1;
   for(int i=0;i<n;i++){
   	cin>>n1;
   	v.push_back(n1);
   }
   int ctr=0;
   n=1;
   for(unsigned int i=0;i<v.size();i++){
   	for(unsigned int j=0;j<=ctr;j++){
   		ctr+=v[i];
   	}
   		n++;
   		if(ctr==v.size()){
   			break;
   		}

   }
   cout<<n;



	return 0;
}
