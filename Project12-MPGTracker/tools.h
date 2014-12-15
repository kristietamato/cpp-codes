// tools.h

#include<string>
using namespace std;

#ifndef TOOLS_LOCK
#define TOOLS_LOCK

void pause(void);
void flushInput(void);
void error( string message );
void checkInputSuccess(void);

void outputLine(void);

int max( int a, int b );
int width( int a );

float calculateRectangleArea(float width, float length);

int getInt(string prompt);
char getChar(string prompt);
float getFloat(string prompt);
string getString(string prompt);
string getLine(string prompt);
bool getBool(string prompt);
int getNonNegativeInt(string prompt);
int getBoundedInt(string prompt, int lowBound, int highBound);
int getPositiveInt(string prompt);
int getPercent(string prompt);

#endif