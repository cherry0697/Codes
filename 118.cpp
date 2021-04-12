// Print all combinations of numbers from 1 to `n` having sum `n`

#include<bits/stdc++.h>
using namespace std;

void find(vector<int> &ans,int sum,int num)
{
  if(sum==0)
  {
    for(auto itr: ans)
      cout<<itr<<" ";

    cout<<endl;

    return;
  }

  if(num>sum)
    return;

  ans.push_back(num);
  find(ans,sum-num,num);
  ans.pop_back();
  find(ans,sum,num+1);
}

int main()
{
  int n;
  cin>>n;

  vector<int> ans;

  find(ans,n,1);

return 0;
}
