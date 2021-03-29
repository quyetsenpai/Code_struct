//Thuat toan them vao vi tri k phan tu x _ Struct

#include "stdio.h"
#define MAX 100
struct mang
{
	int x,k,n;
	int a[MAX];
};
void nhap(mang &info)
{
	scanf("%d",&info.n);
	for(int i = 0 ; i< info.n ; i++)
	{
		scanf("%d",&info.a[i]);
	}
}
void hienthi(mang &info)
{
	
	for(int i = 0 ; i<info.n ; i++)
	{
		printf("\t %d",info.a[i]);
	}
	printf("\n");
}
void themvtk(mang &info)
{
	scanf("%d %d",&info.x,&info.k);
	if(info.k<=0)
	{
		for(int i = info.n+1 ; i > info.k ;i--)
		{
			info.a[i] = info.a[i-1];
		}
		info.a[0]=info.x;
	}
	else if (info.k>info.n)
	{
		info.a[info.n]=info.x;
	}
	else
	{
		for(int i=0 ; i<info.n ; i++)
		{
			if(i==info.k)
			{
				for(int j=info.n+1;j > info.k ; j--)
				{
					info.a[j]=info.a[j-1];
					
				}
				info.a[info.k]=info.x;
			}
		}
	}
	
}
main()
{
	struct mang info;
	nhap(info);
	hienthi(info);
	themvtk(info);
	
	for(int i = 0 ; i<info.n +1 ; i++)
	{
		printf("\t %d",info.a[i]);
	}

}
