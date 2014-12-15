// Tools.h

#include<string>
using namespace std;

#ifndef TOOLS_LOCK
#define TOOLS_LOCK

bool sevenInDigit(int number);
void printNumbers(int &interesting_count, int &number);
void pause(void);
void flushInput(void);
int getNonNegativeInt(string prompt);

#endif