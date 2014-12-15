// tools.h

#include<string>
using namespace std;

#ifndef TOOLS_LOCK
#define TOOLS_LOCK

int getBoundedInt(string prompt);
int getBoundedSize(string prompt);
bool getBool(string prompt);
char getChar(string prompt);
void pause(void);
void flushInput(void);

#endif