#include<stdio.h>
int main()
{
	int i[100][100];
	int R,L,date,month,year,j,k;
	printf("\nEnter your date of birth:");
	scanf("%d",&date);
	printf("\nEnter your month of birth:");
	scanf("%d",&month);
	printf("\nEnter your year of birth:");
	scanf("%d",&year);
	i[1][1] = date;
	i[1][2] = month;
	L = year/100;	//left part of year
	R = year%100;   //right part of year
	i[1][3] = L;
	i[1][4] = R;
	i[2][1] = i[1][4] + 1;
	i[2][2] = i[1][3] - 1;
	i[2][3] = i[1][2] - 3;
	i[2][4] = i[1][1] + 3;
	i[3][1] = i[1][2] - 2;
	i[3][2] = i[1][1] + 2;
	i[3][3] = i[1][4] + 2;
	i[3][4] = i[1][3] - 2;
	i[4][1] = i[1][3] + 1;
	i[4][2] = i[1][4] - 1;
	i[4][3] = i[1][1] + 1;
	i[4][4] = i[1][2] - 1;
	printf("\n\nYour Magic Square:\n");
	for(j=1;j<=4;j++)
	{
		for(k=1;k<=4;k++)
		{
			printf("\t%d ",i[j][k]);
		}
		printf("\n");
	}
	return 0;
}
	
	
	