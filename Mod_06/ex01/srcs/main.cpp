#include <iostream>

typedef struct Data
{
	int x;
};

uintptr_t	serialize(Data *dataptr)
{
	return reinterpret_cast<uintptr_t>(dataptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	struct Data		dat;
	struct Data		*des_dat;
	uintptr_t		something;

	dat.x = 1;

	std::cout << &dat << "dato: " << dat.x << std::endl;

	something = serialize(&dat);
	std::cout << something << std::endl;

	des_dat = deserialize(something);
	std::cout << des_dat << "dato: " << des_dat->x << std::endl;

	return 0;

}