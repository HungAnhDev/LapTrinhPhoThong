#include<bits/stdc++.h>
using namespace std;
void back(int i,int n,int d,int a[])
{
 if (n == 0)
 {
  for (int j = 0;j < d;j++)
  cout << a[j] << " ";
  cout << '\n';
  return;
 }
 for (int j = i;j <= n;j++)
 {
  if (n - j >= 0)
  {
   a[d] = j;
   back(j+1,n-j,d+1,a);
  }
 }
}
int main()
{
 int n;
 cin>>n;
 int a[n];
 back(1,n,0,a);
 return 0;
}
