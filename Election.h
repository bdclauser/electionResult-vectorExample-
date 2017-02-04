/********************************************
**  Brian D. Clauser
**  CPS 272, Sections 01 & D01
**  Assignment #2 - Vectors
**  Program that takes in file, puts it in a vector
**  and sorts it and prints out outcome with percentage
**  of votes.
*********************************************/

#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED

//needed preprocessors 
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

//class 
class Election
{
private:
	string candidateName;
	int votes;
	double votePercentage;
public:
	Election();
	Election(string name, int votesVal);
	void setPercentage(int totalVotes);
	int getVotes();
	void printRecord();
};

#endif // ELECTION_H_INCLUDED