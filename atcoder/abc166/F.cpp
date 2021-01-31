#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 100005;



int n,a,b,c;

vector<string> v;
bool ans[N];
void dfs(int idx,int a,int b,int c)
{
  if(a < 0 or b < 0 or c < 0)return;

  if(idx >=n)
  {
    cout << "Yes" << endl;

    for(int i = 0; i < n; i++)
    {
      cout << v[i][ans[i]] << endl;
    }
    exit(0);
    return;
  }

  int a1 = a, b1 = b,c1 = c;

  if(v[idx][0] == 'A')a++;
  if(v[idx][0] == 'B')b++;
  if(v[idx][0] == 'C')c++;
  if(v[idx][1] == 'A')a--;
  if(v[idx][1] == 'B')b--;
  if(v[idx][1] == 'C')c--;

  ans[idx] = 0;
  if(a >=0 and b >=0 and c >=0)dfs(idx+1,a,b,c);


  a = a1;
  b = b1;
  c = c1;

  if(v[idx][0] == 'A')a--;
  if(v[idx][0] == 'B')b--;
  if(v[idx][0] == 'C')c--;
  if(v[idx][1] == 'A')a++;
  if(v[idx][1] == 'B')b++;
  if(v[idx][1] == 'C')c++;

  ans[idx] = 1;
  if(a >=0 and b >=0 and c >=0)dfs(idx+1,a,b,c);

}

int32_t main()
{



    IOS

    cin >> n >> a >> b >> c;




    for(int i = 0; i < n; i++)
      {
        string s;
        cin >> s;

        v.push_back(s);
      }


      dfs(0,a,b,c);

      cout << "No";

    
    return 0;
}

