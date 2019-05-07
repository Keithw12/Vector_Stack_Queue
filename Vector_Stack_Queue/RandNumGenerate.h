#pragma once
#include <iostream>
#include <stack>
#include <queue>
#include <time.h>
#include <vector>
#include <list>

using namespace std;

class RandNumGenerate
{
public:
	RandNumGenerate();
	void oppositeOrder();
	void sameOrder();
	void beginAndEnd();
	void printAndCountDigits();
private:
	stack <int> sMyStack;
	queue <int> qMyQueue;
	vector <int> vMyVect;
	list <int> lMyList;
	int iTemp = 0;
};