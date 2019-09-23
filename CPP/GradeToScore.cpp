// if you have any doubt ask in comment
// give it a thumbs up
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
char score_to_grade(double score){
	// check is score between 0 to 100
	if (score <= 100 && score >=0)
	{
		if (score >= 90)
		{
			return 'A';
		} 
		else if (score >= 80)
		{
			return 'B';
		}
		else if (score >= 70)
		{
			return 'C';
		}
		else if (score >= 60)
		{
			return 'D';
		}
		else if (score >= 50)
		{
			return 'E';
		}
		else if (score >= 40)
		{
			return 'F';
		}
		else if (score >= 30)
		{
			return 'G';
		}
		else if (score >= 20)
		{
			return 'H';
		}
		else if (score >= 10)
		{
			return 'I';
		}
		else if (score >= 0)
		{
			return 'J';
		}
	}
	// if number is out of range
	return '-';
}


int main()
{
	std::string input;
	double n;

	std::cout<<"Enter a Number : ";
	// input validation
    while (std::getline(std::cin, input))
    {
        std::stringstream ss(input);
        if (ss >> n)
        {
            if (ss.eof())
            {   
                // Success
                break;
            }
        }
        std::cout<<"Opps!!! Please Enter a Number : ";
    }
	std::cout<<"Grade is : "<<score_to_grade(n)<<"\n";
	return 0;
}