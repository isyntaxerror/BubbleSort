#include <string.h>
#include<iostream>
#include "Bubblesort.h"
void BubbleSort(int a[], int n)
{
	int i,j;
	bool swapped;
	int temp;
	for(i=0;i<n-1;i++)
	{
		swapped=false;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				  {
					  int temp=a[j];
					  a[j]=a[j+1];
					  a[j+1]=temp;
					  swapped=true;
				  }
			if(!swapped) break;
		}
	}
}
