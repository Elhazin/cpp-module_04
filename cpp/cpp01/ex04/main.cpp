#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "There is an issue in the arguments\nPlease fix them\n";
		exit(1);
	}
	std::string replace = av[1];
	// if (replace.empty())s called when a new object is created from an existing object, as a copy of the existing object
	std::fstream input;
	input.open(av[1]);
	if (!input.is_open())
	{
		std::cout << "File is not opned\n";
		exit(1);
	}
	std::ofstream outfile;
	std::string out;
	out = std::string(av[1]) + ".replace";
	outfile.open(out);
	
	while (std::getline(outfile, out))
	{
		if (out.str)
	}
}