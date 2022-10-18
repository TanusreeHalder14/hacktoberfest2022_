#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int a[n];
	    int hsh[n]={0};
	    for(int i=0;i<n;i++)
	    {
	     cin>>a[i];
	     hsh[a[i]]++;  
	    }
	    cin>>k;
	    int b[k];
	    for(int i=0;i<k;i++)
	    {
	        cin>>b[i];
	        hsh[b[i]]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(hsh[a[i]]==1)
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
