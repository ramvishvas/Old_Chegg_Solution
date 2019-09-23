#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() 
{
	string inputFile;
	string outputFile;

	cout << "Enter name of input file: ";
	cin >> inputFile;
	cout << endl;

	cout << "Enter name of output file: ";
	cin >> outputFile;
	cout << endl;

	// Create input stream and open input csv file.
  	ifstream input;
   	input.open(inputFile);
	// Verify file opened correctly.
	// Output error message and return 1 if file stream did not open correctly.
	if (!input.is_open())
	{
	    cout<< "Error:: File Open";
	   	exit(1);
	}

	// Read in integers from input file to vector.
	vector<int> vect;
	string str;
	// get line from input file to string str
	getline(input, str);

    int i, j, num;
    int len = str.size(); // size if string
    // iterate whole string and extract number
    for(i = 0,j=0; i < len; i++)
	{
		// check if , is there then convert that substring to number
	    if(str.at(i)==',')
	    {
	    	num = stoi(str.substr(j, i-j)); // convert substring to number
	        vect.push_back(num); //pushing the number
	        j=i+1;
	    }
	    // check for last number
	    else if(i == len - 1)
	    {
	    	num = stoi(str.substr(j, i+1-j)); // convert substring to number
	    	vect.push_back(num); //pushing the number
	    }
	}
	// Close input stream.
	input.close();
	// Get integer average of all values read in.
	int sum = 0;
	for (int i=0; i< vect.size(); i++)
    {
        sum += vect[i];
    }
    int average = sum / vect.size(); // calculating average
	// Convert each value within vector to be the difference between the original value and the average.
    for (int i=0; i< vect.size(); i++)
    {
        if (vect[i] > average)
        {
        	vect[i] = vect[i] - average;
        }
        else
        {
        	vect[i] = average - vect[i];
        }
    }
	// Create output stream and open/create output csv file.
    ofstream output;
   	output.open(outputFile);
	// Verify file opened or was created correctly.
	// Output error message and return 1 if file stream did not open correctly.
   	if (!output.is_open())
	{
	    cout<< "Error:: File Open";
	   	exit(1);
	}
	// Write doubled values into ouptut csv file, each integer separated by a comma.
	for(int i = 0; i < vect.size(); i++)
	{
		// if last number write it without comma into output file
	    if (i == vect.size() -1)
	    {
	    	output<<vect[i];
	    }
	    //  write number with comma into output file
	    else
	    {
	    	output<<vect[i];
	    	output<<",";
	    }
	}
	// // Close output stream.
	output.close();
	return 0;
}