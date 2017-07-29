#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int cmp_int(const void * voidA, const void * voidB) {
	int * a = (int *)(voidA);
	int * b = (int *)(voidB);
	return *a - *b;
}

int arrayMean(int sales[], int size) {
	qsort(sales, size, sizeof(int), cmp_int);
	if (!size % 2) 
		return sales[size/2]; 
	else
		return (sales[size/2] + sales[size/2 -1])/2;
}

int main() {
	const int NUM_AGENTS = 3;
	const int NUM_MONTHS = 12;
	int sales[NUM_AGENTS][NUM_MONTHS] = {
		{1856, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
		{5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, 2534},
		{23, 55, 67, 99, 265, 376, 232, 223, 4546, 564, 4544, 3434}
	};

	int highestMean = arrayMean(sales[0], 12);
	for (int agent = 1; agent < NUM_AGENTS; agent++) {
		int agentMean = arrayMean(sales[agent], 12);
		if (agentMean > highestMean)
			highestMean = agentMean;
	}
	cout << "Highest monthly Mean: " << highestMean << "\n";

}
