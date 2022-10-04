#include <iostream>
#include <fstream>
#include <iosfwd>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac != 4 || std::strlen(av[1]) == 0
		|| std::strlen(av[2]) == 0 || std::strlen(av[3]) == 0)
	{
		std::cout << "Error : Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string		filename = av[1];
	std::string		filename_replace = filename.append(".replace");
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		line_wip;
	std::ifstream	fs;
	std::ofstream	fs_copy;
	size_t			find_it;

	fs.open(av[1], std::ifstream::in | std::ifstream::out);
	if (fs.fail())
	{
		std::cerr << strerror(errno) << std::endl;
		return (1);
	}
	fs_copy.open(filename_replace.c_str());
	if (fs_copy.fail())
	{
		std::cerr << strerror(errno) << std::endl;
		fs.close();
		return (1);
	}
	while (1)
	{
		std::getline(fs, line_wip);
		while (1)
		{
			find_it = line_wip.find(s1);
			if (find_it == std::string::npos)
			{
				fs_copy << line_wip;
				break ;
			}
			else
			{
				fs_copy << line_wip.substr(0, find_it);
				fs_copy << s2;
				line_wip = line_wip.substr(find_it + s1.size());
			}
		}
		if (fs.eof())
			break ;
		fs_copy << std::endl;
	}
	fs_copy.close();
	fs.close();
	return (0);
}
