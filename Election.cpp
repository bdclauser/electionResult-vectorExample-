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

//definitions of the Class from header file
Election::Election()
{
	candidateName = "";
	votes = 0;
	votePercentage = 0;
}

Election::Election(string name, int votesVal)
{
	candidateName = name;
	votes = votesVal;
	votePercentage = 0;
}

void Election::setPercentage(int totalVotes)
{
	votePercentage = (votes / (double)totalVotes) * 100.0;
}

int Election::getVotes()
{
	return votes;
}

void Election::printRecord()
{
	cout << fixed << setprecision(1);
	cout << left << setw(20) << candidateName << left << setw(10) << votes << left << setw(10) << votePercentage << endl;
}