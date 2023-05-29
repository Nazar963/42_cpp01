#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	int	y = 0;
	int	start = 0;
	int	replace = 0;
	std::string	result;

	if (ac == 4)
	{
		std::ifstream	file(av[1]);

		if (file.is_open())
		{
			std::string	line;
			while (std::getline(file, line))
			{
				while (line[i])
				{
					if (line[i] == av[2][y])
					{
						start = i;
						while (line[i] == av[2][y])
						{
							if (av[2][y] == '\0')
							{
								while (av[3][x])
								result[j] = 
							}
							i++;
							y++;
						}
					}
					result[j] = line[i];
				}
				std::cout << line << std::endl;
			}
			file.close();
		}
	}
	else
		std::cout << "Error: Wrong Number Of Arguments!!!" << std::endl;
	return (0);

}