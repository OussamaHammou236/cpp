#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	std::string str;
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string res;
	std::ifstream file;
	int pos = 0;
	int b = 0;

	file.open(filename);
	if (!file.is_open()) {std::cerr << "file not open"<< "\n"; return 1;}
	std::ofstream OutFile(filename + ".replace");
	if (!OutFile)
	{
		std::cerr << "Error creating file: " << filename << ".replace" << "\n";
		return (1);
	}

	while (std::getline(file, str))
	{
		pos = str.find(s1);
		while (pos != std::string::npos)
		{
			res += str.substr(0, pos) + s2;
			str = str.substr(pos + 1);
			pos = str.find(s1);
		}
		if (pos == std::string::npos)
		{
			res += str;
		}
		res += "\n";
	}
	OutFile << res;
	return (0);
}