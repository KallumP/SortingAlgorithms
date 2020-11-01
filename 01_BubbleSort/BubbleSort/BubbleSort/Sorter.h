#pragma once
#include <vector>

class Sorter {

public:

	Sorter(int, int);
	void Tick(int);



private:

	void SetupValues(int);
	void ShuffleValues();
	void BubbleSort();


	std::vector<float> values;
	int currentIdenx;
};

