#include<bits/stdc++.h>
using namespace std;

string tenthieng;
map<string,int> tentoida;

int main(){    

cin>>tenthieng;

int n=tenthieng.size();   
tenthieng=" "+tenthieng;  

    for (int i=1; i<=n; i++)        
        for (int j=i; j<=n; j++)            
            tentoida[tenthieng.substr(i,j-i+1)]=1;    
            
cout<<tentoida.size()-1;    
return 0;
}
