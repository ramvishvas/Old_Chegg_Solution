#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<char> M[3][5]; // the table of rules

void readrules()
{

	// ** read in the rules info M, make sure $ is not stored
	// Create input stream and open input file.
  	ifstream file;
  	string word;
   	file.open("readrule.txt");
	// Verify file opened correctly.
	// Output error message and return 1 if file stream did not open correctly.
	int i = 0, j = 0;
	if (file.is_open())
	{
		while (file >> word)
		{
			if (word == '$')
			{
				++i;
				j = 0;
				continue;
			}
			else
			{
				M[i][j++].push_back(word);
			}
			cout<<word<<endl;
		}
		file.close();
	}
 //   	std::vector<char> vec;
	// if (!file.eof() && !file.fail())
	// {
	//     file.seekg(0, std::ios_base::end);
	//     std::streampos fileSize = file.tellg();
	//     vec.resize(fileSize);

	//     file.seekg(0, std::ios_base::beg);
	//     file.read(&vec[0], fileSize);
	// }

	// // ** display the table
	// for (int i = 0; i < vec.size(); ++i)
	// {
	// 	cout<<vec[i]<<endl;
	// }
}

int main()
{
	readrules();
	return 0;
}
