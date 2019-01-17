/*This problem was asked by Amazon.

Given a N by M matrix of numbers, print out the matrix in a clockwise spiral.
For example, given the following matrix :
[[1, 2, 3, 4, 5],
[6, 7, 8, 9, 10],
[11, 12, 13, 14, 15],
[16, 17, 18, 19, 20]]
You should print out the following :
1
2
3
4
5
10
15
20
19
18
17
16
11
6
7
8
9
14
13
12*/

#include <iostream>
using std::shared_ptr;

void printArrClockWise(int **arr, int N, int M);

int main()
{
	
	//Initializing an array
	const int N = 5;
	const int M = 6;
	int **arr = new int*[N];
	for (int i = 0; i < N; ++i) {
		arr[i] = new int[M];
	}
	int x = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			arr[i][j] = ++x;
		}
	}

	//Calling printer function
	printArrClockWise(arr, N, M);

	//Dellocating the allocated memory
	for (int i = 0; i < N; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
}


void printArrClockWise(int **arr, int N, int M) {
	std::cout << "Input array:" << std::endl;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			std::cout << arr[i][j] << ",";
		}
		std::cout << std::endl;
	}

	std::cout << "Spiral:" << std::endl;
	int currStart = 0;
	for (int i = 0; i < N; ++i) {
		if (currStart%2 == 0) {
			for (int j = 0; j < M; ++j) {
				std::cout << arr[i][j] << std::endl;
			}
		}
		else {
			for (int j = M-1; j >= 0; --j) {
				std::cout << arr[i][j] << std::endl;
			}
		}
		++currStart;
	}
}