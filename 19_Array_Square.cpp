#include <stdio.h>
main()
{
	int square [100];
	int i,k;
	//int matriks1 [3][3]={{1,2,3},{4,5,6}};
	
	//printf ("%d", matriks1[3][3]);
	
	for (i=0;i<10;i++)
	{
		k=i+1;
		square[i]=k*k;
		printf("\n Pangkat dari %d adalah %d", k, square[i]);
		
	}
	return 0;
	
	
}
