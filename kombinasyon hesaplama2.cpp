#include <stdio.h>
int kombinasyon(int kom1, int kom2)
{
//	printf("%d %d ",kom1,kom2);
	int i,usdegersonuc,altdegersonuc;
		usdegersonuc=1;
		altdegersonuc=1;
				printf("\n");
	for(i=1;i<=kom2;i++)
	{
	 usdegersonuc = usdegersonuc * kom1;
	 --kom1;
 //	printf("%d ",usdegersonuc);
	 	
	}
		printf("\n");		
	for(i=1;i<=kom2;kom2--)
	{
//	printf("***%d*** ",kom2);
		altdegersonuc = altdegersonuc * kom2;
		
//printf("%d ",altdegersonuc);
	}
		printf("\n");		


//	printf("%d %d ",usdegersonuc,altdegersonuc);
	return (usdegersonuc/altdegersonuc);
		
}

main()
{
 int kom1,kom2,sonuc;

  scanf("%d",&kom1);
  scanf("%d",&kom2);
  sonuc =kombinasyon(kom1,kom2);
  printf("%d",sonuc);
}

