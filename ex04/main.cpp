#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	//! create and open a file that is the same as av[1] but end with .replace
	std::string	outfile_name = std::string(av[1]);
	size_t index = outfile_name.find('.');
	outfile_name.erase(index, (outfile_name.length() - index));
	outfile_name += ".replace";
	//! -------------------------------------------------------------------------- */

	std::string	to_replace = av[2];
	std::string	replace_with = av[3];
	size_t	pos = 0;

	if (ac == 4)
	{
		std::ifstream	infile(av[1]);
		std::ofstream	outfile(outfile_name.c_str());

		if (infile.is_open() && outfile.is_open())
		{
			std::string	line;
			while (std::getline(infile, line))
			{
				pos = 0;
				while ((pos = line.find(to_replace, pos)) != std::string::npos)
				{
					line.erase(pos, to_replace.length());
					line.insert(pos, replace_with);
					pos += replace_with.length();
				}
				outfile << line << std::endl;
			}
			infile.close();
			outfile.close();
		}
	}
	else
		std::cout << "Error: Wrong Number Of Arguments!!!" << std::endl;
	return (0);

}