#include<stdio.h>
check(int a[], int x)
{
	int i,j,y,k;

	for (i=1;i<=x;i++)
	{	
	
 		for (j=1;j<=a[i];j++)
		{	
			if (a[i]%j==0)
			k++;
		}
		if (k==2)
		{
			a[i]=0;
			k=0;
		}		
		
		else 
		k=0;
	}

	printf("\nMang sau khi sua la\n");
	for(y=1;y<=x;y++)
		printf("%d\t", a[y]);
}

main()
{
	int n,i,j;
	printf("Nhap so phan tu cua mang\n");
	scanf("%d",&n);
	int a[n];
	for (i=1;i<=n;i++)
	{
		printf("Nhap cac phan tu trong mang\n");
		scanf("%d", &a[i]);
	}
	printf("Mang ban dau la\n");
	for (j=1;j<=n;j++)
	{
		printf("%d\t", a[j]);
	}
	check(a,n);
}
