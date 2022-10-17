#include<bits/stdc++.h>
using namespace std;
bool cmp(unordered_map<char,int>a,unordered_map<char,int>b)
{
if(a.second!=b.second)
{
return a.second>b.second;
}
return a.first<b.first;
}
int main()
{
string s;
cin>>s;
unordered_map<char,int>m;
for(int i=0;i<s.size();i++)
{
m[s[i]]++;
}
sort(m.begin(),m.end(),cmp);
cout<<m.first<<endl;
}