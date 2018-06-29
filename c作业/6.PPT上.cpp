#include<stdio.h>
int main()
{
int a[5][5],i,j,sum=0;
printf("请输入%d*%d矩阵：\n",5,5);
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{
scanf("%d",&a[i][j]);
if (i==j)sum+=a[i][j];
}
printf("\n主对角线和=%d\n",sum);
}

