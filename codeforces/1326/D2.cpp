  //Keep Working Hard
  // I__Like__Food
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast") 
  #pragma GCC optimize("unroll-loops")
  using namespace std;
  using namespace __gnu_pbds;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define PB push_back
  #define MP make_pair
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 998244353
  #define N 200005
  #define INF 1e16
  const double PI = acos(-1);

  

  // takes string s and returns vector of lengths of even length ... | (it's centered around the right middle char, bb is centered around the later 'b')
  vector<int> manacher_odd(string s){
  int n = s.length(); vector<int> d1(n);
  for(int i=0,l=0,r=-1; i<n; i++){ d1[i] = 1;
    if(i <= r)
      d1[i]=min(r-i+1,d1[l+r-i]); 
    while(i+d1[i]<n && i-d1[i]>=0 && s[i+d1[i]]==s[i-d1[i]]) d1[i]++;
    if(r<i+d1[i]-1)l=i-d1[i]+1,r=i+d1[i]-1;
  } return d1; }

vector<int> manacher_even(string s){ int n=s.length(); vector<int> d2(n);
  for(int i=0,l=0,r=-1;i<n;i++){ d2[i]=0;
    if(i <= r) d2[i] = min(r-i+1,d2[l+r+1-i]);
    while(i+d2[i]<n && i-d2[i]-1>=0 && s[i+d2[i]]==s[i-d2[i]-1])d2[i]++;
    if(d2[i]>0&&r<i+d2[i]-1)l=i-d2[i], r=i+d2[i]-1;
  } return d2; }

string middleanswer(string md)
{

   vector<int> v1 = manacher_even(md);
   vector<int> v2 = manacher_odd(md);
    //   cout << endl;
    // for(auto i: v1)
    // {
    //   cout << i << " ";
    // }

    // cout << endl;

    // for(auto i : v2)
    // {
    //   cout << i << " ";
    // }

    int ans2 = 1;
    int ans2pos = 0;

    for(int i = 0; i < v2.size(); i++)
    {
   //  trace3(i,v2[i],ans2);
      if(v2[i] == i+1 and ans2 < i+1)
      {
        ans2 = i+1;
      }
    }
    int ans1 = 0;

    for(int i = 0;  i < v1.size(); i++)
    {
      if(v1[i] == i and ans1 < i )
      {
        ans1 =i;
      }
    }

    ans1 = 2*ans1;
    ans2 = 2 * ans2 -1;

   // trace2(ans1,ans2);


    int ans = max(ans1,ans2);
    return md.substr(0,ans);


}
int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    cases
    {

    string s;
    cin >> s;
    string ss = s;
    reverse(all(ss));
    if(s == ss)
    {
      cout << s << endl;
      continue;
    }

   int ans1 = 0;
   int j = s.length() - 1;


   while(ans1 < j)
   {
    if(s[ans1] != s[j])
    {
      break;
    }
    ans1++;
    j--;
   }

 //  cout << ans1 << " " << j << endl;

  // trace1(ans1);

   string prefix= s.substr(0,ans1);

   string suffix = prefix;
   reverse(all(suffix));

  // trace2(prefix,suffix);

   string md1 = s.substr(ans1,s.length()-2*suffix.length());

   string md2 = md1;
   reverse(all(md2));

   md1 = middleanswer(md1);
   md2 = middleanswer(md2);

   string ans;
   //trace2(md1,md2);

   if(md1.length() < md2.length())
   {
    ans = prefix + md2 + suffix;
        if(ans1 == 0)ans = md2;
  }
  else
  {
    ans = prefix + md1 + suffix;
        if(ans1 == 0)ans = md1;
  }

  cout << ans << endl;

}

  return 0;
} 