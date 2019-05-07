

#include "RandNumGenerate.h"

int main()
{
	srand(time(NULL));
		
	RandNumGenerate *sRandNumClass = new RandNumGenerate;
	sRandNumClass->oppositeOrder();
	sRandNumClass->sameOrder();
	sRandNumClass->beginAndEnd();
	sRandNumClass->printAndCountDigits();

	delete sRandNumClass;
	sRandNumClass = NULL;

	system("pause");
	return 0;
}