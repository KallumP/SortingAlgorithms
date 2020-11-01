#include "Sorter.h"

Sorter::Sorter(int screenWidth, int valuesToMake) {

	SetupValues(valuesToMake);
	ShuffleValues;

}


void Sorter::SetupValues(int valuesToMake) {
}

void Sorter::ShuffleValues() {
}

void Sorter::Tick(int) {
	BubbleSort();
}

void Sorter::BubbleSort() {
}