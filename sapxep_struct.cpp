//Sap xep chuoi theo trinh tu thap toi cao - theo struct

#include "stdio.h"
struct Mang
{
	int n,k;
	int a[100];
};
void nhap(Mang &info)
{
	scanf("%d",&info.n);
	for(int i = 0 ; i < info.n ; i++)
	{
		scanf("%d",&info.a[i]);
	}
}
void hienthi(Mang &info)
{
	for(int i=0;i<info.n ; i++)
	{
		printf(" %d ",info.a[i]);
	}
	printf("\n");
}
void Sapxep(Mang &info)
{
	int temp=0;
	for(int i=0;i<info.n-1; i++)
	{
		for(int j= i + 1 ; j < info.n ; j++ )
		{
			if(info.a[i] > info.a[j])
			{
				temp = info.a[j];
				info.a[j] = info.a[i];
				info.a[i] = temp;
			}		
		}
	}
}
main()
{
	
	struct Mang info;
	nhap(info);
	hienthi(info);
	Sapxep(info);
	hienthi(info);
}
