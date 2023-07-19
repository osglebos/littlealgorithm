#include <iostream>
#include "LittleAlgorithm.h"
using namespace std;

const unsigned int ARRAY_SIZE = 8;
const int MAX_INF = INT32_MAX;
const int MIN_INF = INT32_MAX;

/*const int MAX_INF = INT_MAX;
const int MIN_INF = INT_MIN;*/

int **Inicialize(void)
{
	int tmp[ARRAY_SIZE][ARRAY_SIZE] = {
		{MAX_INF, 5, MIN_INF, MIN_INF, MIN_INF, MIN_INF, MIN_INF, 22},
		{5, MAX_INF, 12, 22, MIN_INF, MIN_INF, MIN_INF, MIN_INF},
		{MIN_INF, 12, MAX_INF, 53, MIN_INF, 50, MIN_INF, 14},
		{MIN_INF, 22, 53, MAX_INF, 33, MIN_INF, 25, MIN_INF},
		{MIN_INF, MIN_INF, MIN_INF, 33, MAX_INF, 20, MIN_INF, MIN_INF},
		{MIN_INF, MIN_INF, 50, MIN_INF, 20, MAX_INF, 61, 16},
		{MIN_INF, MIN_INF, MIN_INF, 25, MIN_INF, 61, MAX_INF, MIN_INF},
		{22, MIN_INF, 14, MIN_INF, MIN_INF, 16, MIN_INF, MAX_INF}

	};

	int **tmp_matrix = new int *[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++) {
		tmp_matrix[i] = new int[ARRAY_SIZE];
		for (int k = 0; k < ARRAY_SIZE; k++) tmp_matrix[i][k] = tmp[i][k];
	}
	return tmp_matrix;
}

int main(void)
{
	Algorithm* method = new Algorithm();
	method = new LittleAlgorithm();
	method->LoadData(Inicialize(), ARRAY_SIZE, ARRAY_SIZE);
	method->Run();
	system("pause");
	return 0;
}