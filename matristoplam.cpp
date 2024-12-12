#include<stdio.h>

int main()
{
	int matrisA[2][2],matrisB[2][2],matrisC[2][2];
	int n,m;
	printf("A Matrisi");
	for(n=0;n<2;n++)
    {
		for(m=0;m<2;m++)
		{
			scanf("%d",&matrisA[n][m]);
		}
	}
	printf("B Matrisi");
	for(n=0;n<2;n++)
    {
		for(m=0;m<2;m++)
		{
			scanf("%d",&matrisB[n][m]);
		}
	}
	printf("(TOPLAM)\n");
	for(n=0;n<2;n++)
    {
		for(m=0;m<2;m++)
		{
			matrisC[n][m]=matrisA[n][m]+matrisB[n][m];
		}
	}
	printf("C Matrisi\n");
	for(n=0;n<2;n++)
    {
		for(m=0;m<2;m++)
		{
			printf("%d ",matrisC[n][m]);
		}
		printf("\n");
	}
	
	
	
	
	
}
