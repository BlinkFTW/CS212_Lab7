/*
Eric Kang
Section 53
Lab 7 Header

Description:

*/

#include<iostream>
#include<stack>
#include<queue>

const int MAXQUEUESIZE = 10;
using namespace std;

class Equation
{
public:
	void getInput();
	int evalExp( string, int );
	int precidence( char );
	void printAns( string );
private:
	char eqn[MAXQUEUESIZE];	//Equation
	int maxChar;		//a counter for the number of the of characters in eqn[]
	int sol;			//Solution
	int i; 				//counter
};
