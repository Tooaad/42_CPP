#include "../includes/iter.hpp"

int main(void)
{
	std::string arr[5]  = {"0", "1", "2", "3", "4" };
	int			arrr[2] = { 5, 6 };

	::iter(arr, 5, print);
	::iter(arrr, 2, print);

	return 0;
}