#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
	std::ifstream in_file;
	in_file.open(argv[1]);
	std::ofstream out_file;
	out_file.open(argv[2]);
	
	std::string line;
	out_file << "\"";
	while (std::getline(in_file, line))
	{
		out_file << line + "\\n \\\n";
	}
	out_file << "\"\n";
	
	out_file.close();
	
	return 0;
}
