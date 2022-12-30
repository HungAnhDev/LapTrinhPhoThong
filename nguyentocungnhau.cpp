#include<bits/stdc++.h>
using namespace std;
const long long amax=5e5+5;
const long long mod=1e9+7;
long long check(long long a){
   if(a<=1) return 0;
   if(a<=3) return 1;
   if(a%2==0||a%3==0) return 0;
   for(long long i=5;i*i<=a;i+=6)
     if(a%i==0||a%(i+2)==0)
       return 0;
    return 1;
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
 long long a,b,c=0;
 cin>>a>>b;
 vector<long long> p;
 if (check(a)){
  cout<<b-b/a;
  return 0;
 }
 for (int i=2;i<=sqrt(a);i++)
  if (a%i==0){
   if (check(i))
    p.push_back(i);
   long long x=a/i;
   if (x==i) continue;
   if (check(x)) 
    p.push_back(x);
  }
 for (long long i=0;i<p.size();i++) {
 c+=b/p[i];
  for (int e=i+1;e<p.size();e++){
  c-=b/(p[i]*p[e]);
   for (int f=e+1;f<p.size();f++){
   c+=b/(p[i]*p[e]*p[f]);
    for (int j=f+1;j<p.size();j++){
    c-=b/(p[i]*p[e]*p[f]*p[j]);
     for (int l=j+1;l<p.size();l++){
     c+=b/(p[i]*p[e]*p[f]*p[j]*p[l]);
      for (int m=l+1;m<p.size();m++){
      c-=b/(p[i]*p[e]*p[f]*p[j]*p[l]*p[m]);
      }
     }
    }
   }
  }
 }
 cout<<b-c;
}
