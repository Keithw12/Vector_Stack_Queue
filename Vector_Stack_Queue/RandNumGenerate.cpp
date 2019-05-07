#include "RandNumGenerate.h"

RandNumGenerate::RandNumGenerate()
{
	for (size_t i = 0; i < 100; i++)
	{
		iTemp = rand() % 100 + 50;
		sMyStack.push(iTemp);
		qMyQueue.push(iTemp);
		vMyVect.push_back(iTemp);
		lMyList.push_back(iTemp);
	}
}

void RandNumGenerate::oppositeOrder()
{
	cout << "Opposite Order:\n";
	while (!sMyStack.empty())
	{
		cout << sMyStack.top() << " ";
		sMyStack.pop();
	}
	cout << endl;
}

void RandNumGenerate::sameOrder()
{
	cout << "Same Order:\n";
	while (!qMyQueue.empty())
	{
		cout << qMyQueue.front() << " ";
		sMyStack.push(qMyQueue.front());
		qMyQueue.pop();
	}
	cout << endl;
}

void RandNumGenerate::beginAndEnd()
{
	cout << "First and Last value order:\n";
	while (!lMyList.empty())
	{
		cout << lMyList.front() << ' ';
		lMyList.pop_front();
		cout << lMyList.back() << ' ';
		lMyList.pop_back();
	}
	cout << endl;
}

void RandNumGenerate::printAndCountDigits()
{
	auto counter = 1;	//At least occurs once in the list
	auto iter = vMyVect.begin();
	while (true)
	{
		if (iter == vMyVect.end())
		{
			break;
		}

		auto iter2 = iter + 1;

		while (true)
		{
			if (iter2 == vMyVect.end())
			{
				break;
			}
			else if ((*iter) == (*iter2))		//If iter and iter2 equal, then they are duplicates
			{
				counter += 1;
				iter2 = vMyVect.erase(iter2);	// delete the duplicate value(element) after we count it
			}
			else
			{
				++iter2;
			}
		}
		++iter;
		if (iter == vMyVect.end())
		{
			vMyVect.push_back(counter);	//the last counter has to be pushed onto the vector.
			break;
		}
		else
		{
			iter = vMyVect.insert(iter, counter);	//inserts at the element before iter, so increment iter
			++iter;
			counter = 1;
		}

	}

	//Output
	auto vectSize = vMyVect.size();

	for (size_t i = 0; i < (vectSize - 1); i++, i++)
	{
		cout << "Value: " << vMyVect[i] << " is counted " << vMyVect[i + 1] << " time(s).\n";
	}
}