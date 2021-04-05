// Find two numbers with maximum sum formed by array digits

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n,greater<int>());

  int x=0,y=0;

  for(int i=0;i<n;i+=2)
  {
    x=x*10+a[i];
    if(i+1<n)
      y=y*10+a[i+1];
  }

  cout<<x<<" "<<y<<endl;

return 0;
}
