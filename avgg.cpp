//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//main()
//{
//	ll t;
//	ll kq=0;
//	cin>>t;
//	for(ll i=0; i<t; i++)
//	{
//		ll n;
//		cin>>n;
//		ll a[n];
//		for(ll i=0; i<n; i++)
//		{
//			cin>>a[i];	
//		}
//		for(int i=0; i<n-2; i++)
//		{
//			map<ll,ll> mp;
//			for(int j=i+1; j<n; j++)
//			{
//				if ((a[j]+a[i])%2==0)
//				{                            
//					kq=kq+mp[(a[i]+a[j])/2];
//				}	
//				mp[j]++;
//			}	
//		cout<<kq<<endl;
//		}
//	}
//}
