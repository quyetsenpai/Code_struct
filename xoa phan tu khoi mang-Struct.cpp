//Xoa phan tu khoi mang- Struct

#include "stdio.h"
#define MAX 100

struct mang
{
	int n,k;
	int a[MAX];
};
void nhap(mang &info)
{
	scanf("%d",&info.n);
	for(int i=0 ; i<info.n ; i++)
	{
		scanf("%d",&info.a[i]);
	}
}
void hientt(mang &info)
{
	for(int i = 0 ; i<info.n;i++)
	{
		printf("%d\t",info.a[i]);
	}
	printf("\n");
}
void xoapt(mang &info)
{
	scanf("%d",&info.k);
	if(info.k<=0)
	{
		for(int i=0;i<info.n-1;i++)
		{
			info.a[i]=info.a[i+1];
		}
		info.n--;
	}else
	if(info.k>=info.n)
	{
		info.n--;
	}else
	{
		for(int i=0;i<info.n;i++)
		{
			if(i==info.k)
			{
				for(int j=info.k;j<info.n ; j++)
				{
					info.a[j]= info.a[j+1];
				}
			}
		}
		info.n--;
	}
	
}
main()
{
	struct mang info;
	nhap(info);
	hientt(info);
	xoapt(info);
	hientt(info);
}
