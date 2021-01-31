#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 50;


vector<int> a,b,c,d;

    int n,m,q;
int mxscore;
int score(vector<int> &v)
{
  int ans = 0;

  for(int i = 0; i < q; i++)
  {
    if(a[i] - 1 < n and b[i] - 1 < n and (v[b[i]-1] - v[a[i]-1] == c[i]))ans += d[i];
  }

  return ans;
}

void rec(vector<int> v,int idx)
{

  mxscore = max(mxscore,score(v));
 


 int mxnow = v[idx+1];
  //   cout << "idx: " << idx << endl;
  // cout << "mxnow: " << mxnow << endl;


  // for(auto i : v)
  // {
  //   cout << i << " ";
  // }
  // cout << endl;
  if(idx < 0)return;

  

  for(int i = mxnow; i >= 1; i--)
  {
    v[idx] = i;
    mxnow = min(mxnow,i);
    rec(v,idx-1);
  }

}


int32_t main()
{


    IOS


vector<int> v;

    cin >> n >> m >> q;

    for(int i = 1; i <= q; i++)
    {
      int x,y,z,w;
      cin >> x >> y >> z >> w;
      a.push_back(x);
      b.push_back(y);
      c.push_back(z);
      d.push_back(w);

    }


    for(int i = 1; i <= n; i++)
    {
      v.push_back(1);
    }

    mxscore = score(v);



    for(int i = 1; i <= m; i++)
    {
      v[n-1] = i;
      rec(v,n-2);
    }
    
    cout << mxscore;

    
    return 0;
}

