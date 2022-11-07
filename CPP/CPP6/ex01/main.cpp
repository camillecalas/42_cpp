#include <iostream>
#include <string>
#include <stdint.h>
#include <sstream>

struct Data
{
	double 	k;
	int		i;
	int		j;
	char	c;
	bool	x;
	std::string	s;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int main()
{
	Data		data;
	Data		*ptr;
	uintptr_t	raw;

	data.k = 4.4;
	data.i = 50;
	data.j = 2;
	data.c = 'c';
	data.x = true;

	std::cout << "Data address = " << &data << " | Double data.k = " << data.k << std::endl;
	std::cout << "Data address = " << &data << " | Int  data.i = " << data.i << std::endl;
	std::cout << "Data address = " << &data << " | Int  data.j = " << data.j << std::endl;
	std::cout << "Data address = " << &data << " | Char data.c = " << data.c << std::endl;
	std::cout << "Data address = " << &data << " | Bool data.x = " << data.x << std::endl;
	std::cout << "*****************" << std::endl;

	raw = serialize(&data);
	ptr = deserialize(raw);

	std::cout << "Data address = " << &data << " | Double data.k = " << ptr->k << std::endl;
	std::cout << "Data address = " << &data << " | Int  data.i = " << ptr->i << std::endl;
	std::cout << "Data address = " << &data << " | Int  data.j = " << ptr->j << std::endl;
	std::cout << "Data address = " << &data << " | Char data.c = " << ptr->c << std::endl;
	std::cout << "Data address = " << &data << " | Bool data.x = " << ptr->x << std::endl;

	std::cout << "*****************" << std::endl;
	Data data2;
	data2.s = "4u83290432052408fnruei3892873902" ;
	std::ostringstream ss;

	std::cout << "Data address = " << &data2 << " | string = " << data2.s  << std::endl;

	uintptr_t RAW = serialize((Data*)&data2);
	ss << "0x" << std::hex << RAW;
	std::cout << "PTR address returned by serialize : " << ss.str() << std::endl;

	Data *PTR = deserialize(RAW);
	std::cout << "Data address returned by deserialize = " <<  PTR <<  " | string = " << PTR->s << std::endl;


	return (0);
}