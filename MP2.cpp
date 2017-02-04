/********************************************
**  Brian D. Clauser
**  CPS 272, Sections 01 & D01
**  Assignment #2 - Vectors
**  Program that takes in file, puts it in a vector
**  and sorts it and prints out outcome with percentage
**  of votes.
*********************************************/


//included header w/all preprocessor directives
#include "Election.h"

//sort function used later
bool sortByVotes(Election i, Election j)
{
	return (i.getVotes() > j.getVotes());
}

int main()
{
	vector<Election> results;

	fstream filein("Text.txt");

	int total = 0;
	int votes;
	string name;

	while (filein.good())
	{
		(filein.ignore(10000, '\n'));	//ignores the first line
		filein >> name >> votes;

		Election obj(name, votes);

		results.push_back(obj);

		total += votes;
	}

	filein.close();

	sort(results.begin(), results.end(), sortByVotes);

	//print out results
	cout << left << setw(20) << "Candidate Name" << left << setw(10) << "Votes" << left << setw(10) << "% Votes" << endl;

	for (size_t i = 0; i<results.size(); i++)
	{
		results[i].setPercentage(total);
		results[i].printRecord();
	}

	cout << endl << endl;

	return 0;
}