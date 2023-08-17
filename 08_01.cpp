#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ifstream fi ("dulieuvao.txt");
ofstream fo ("xuat.txt");

void sodaonguoc(ll n)
{
	ll s=0;
	while(n>0)
	{
		s=s*10+n%10;
		n=n/10;
	}
	fo<<s;
}
void tongchuso(ll n)
{
	ll s=0;
	while(n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	fo<<s;
}
int checknt(int n)
{
	if (n<2) return 2;
	for(int i=2; i*i<=n; i++)
	{
		if (n%i==0) return 2;
	}
	return 1;
}
void ptb1(int a, int b)
{
	if (a==0)
	{
		if (b==0) fo<<"PT vo so nghiem!";
		else fo<<"PT vo nghiem!";
	}
	else 
	{ 
		float x=1.0*-b/a;
		fo<<"PT co nghiem la: "<<x;
	}
}
	int checkhn(int n, int m)
	{
		int s=0;
		for(int i=1; i<n; i++)
		{
			if (n%i==0) s=s+i;
		}
		if (s==m) return 1;
		else return 0;
		fo<<endl;
	}
main()
{
	if (fo==NULL) cout<<"Loi ghi file";
	else 
	{
	ll n;
	int a,b;
	fi>>n;
	sodaonguoc(n);
	fo<<endl;
	tongchuso(n);
	fo<<endl;
	for(int i=1; i<n; i++)
	{
		if (checknt(i)==1) fo<<i<<" ";
	}
	fo<<endl;
	fo<<"Giai pt b1: ";
	fo<<"Nhap he so pt1: ";
	fi>>a>>b;
	ptb1(a,b);
	fo<<"Nhap he so pt2: ";
	fi>>a>>b;
	ptb1(a,b);  
	fo<<"Nhap he so pt3: ";
	fi>>a>>b;
	ptb1(a,b);
	fo<<endl;
	fo<<endl;
	fo<<"Cac cap so huu nghi: ";
	for(int i=1; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if ((checkhn(i,j)==1) || (checkhn(j,i)==1))
			fo<<i<<" "<<j<<endl;
		}
	}	
	}
}
