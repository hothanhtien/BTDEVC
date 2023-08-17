#include <bits/stdc++.h>
using namespace std;

main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int dem=0;
	int max;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if (a[i]%2==0)
		{
			b[dem]=a[i];
			max=b[0];
			if (dem>=1 && b[dem]>b[dem-1])
			max=b[dem];
			dem++;
		}
	}
	cout<<max;
}
