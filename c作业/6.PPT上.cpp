#include<stdio.h>
int main()
{
int a[5][5],i,j,sum=0;
printf("������%d*%d����\n",5,5);
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{
scanf("%d",&a[i][j]);
if (i==j)sum+=a[i][j];
}
printf("\n���Խ��ߺ�=%d\n",sum);
}

