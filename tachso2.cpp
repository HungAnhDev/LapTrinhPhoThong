#include<bits/stdc++.h>
using namespace std;
int kt,d=0;
string s;
string a[100001];

bool cmp(string a,string b){    
    while (a.size()<b.size()) a="0"+a;    
    while (a.size()>b.size()) b="0"+b;    
return (a<b);
}

int main(){    
cin>>s;    
s=" "+s;    
for (int i=0; i<=s.size()-1; i++)   
 {        
 if (s[i]>='0'&&s[i]<='9')       
  {            
  if (s[i]=='0')           
   {                
   if (kt==1)                
   {                   
   a[d]=a[d]+s[i];                   
   kt=1;                
   }            
    }            
   else            
   {                
   if (kt==0) d++;                
   a[d]=a[d]+s[i];                
   kt=1;            
   }        
    } 
   else kt=0;    
   }    
   sort(a+1,a+d+1,cmp);    
   for (int i=1; i<=d; i++) 
   cout<<a[i]<<" ";    
   return 0;
   }
