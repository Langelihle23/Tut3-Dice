#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

float average(Dice obj,int rollCount) //returns the average of all dice rolls
{
	float totalAverage;
	return (totalAverage += rollCount)/6;
}

float average(int arr[],int totalIntegers) //returns the average of all the integers in the array
{

}

class Dice{

public:
	Dice();
	void Roll();
	void Display();
	void Reset();

private:
	int rollCount;
	int lastRoll;
	
};

void Dice::Roll()
{
	lastRoll = 0;
	rollCount++;
	Dice myDice;
	lastRoll = (rand() % 6) + 1;  //generate a random number between 1 and 6
	average(myDice,lastRoll);
	
}

int main()
{
	Dice object;
	int dice[6];
	object.average(, 12);
	object.average(dice[], 20);


}