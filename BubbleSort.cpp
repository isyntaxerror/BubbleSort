#include <string.h>

#include "Bubblesort.h"

void BubbleSort(int A [], int NumElements)
{
	int		i;
	bool	Sorted;
	int		Temp;

	
	do {
		Sorted = true;
		NumElements--;
		for (i = 0; i < NumElements; i++)
			if (A[i] > A[i + 1])
			{
				Temp		= A[i];
				A[i] = A[i + 1];
				A[i + 1] = Temp;
				Sorted = false;
			}
	} while (!Sorted);
}
