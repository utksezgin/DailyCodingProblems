/*This problem was asked by Google.

Implement integer exponentiation. That is, implement the pow(x, y) function, where x and y are integers and returns x^y.
Do this faster than the naive method of repeated multiplication.
For example, pow(2, 10) should return 1024.
*/


#include <iostream>

int fastPow(int x, int y);

int main()
{
	std::cout << fastPow(2, 10);
}

int fastPow(int x, int y) {
	if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else if (y % 2 == 0)
		return fastPow(x, y / 2) * fastPow(x, y / 2);
	else 
		return x* fastPow(x, y / 2) * fastPow(x, y / 2);
}