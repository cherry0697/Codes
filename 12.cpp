// Shuffle an array using Fisher–Yates shuffle algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
  srand(time(0));

  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=n-1;i>=1;i--){
    int j=rand()%(i+1);
    swap(a[i],a[j]);
  }

  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

  cout<<endl;

return 0;
}
