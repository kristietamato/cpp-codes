//  Tools.h

#include<string>
using namespace std;

#ifndef TOOLS_LOCK
#define TOOLS_LOCK

string unitInput(string prompt);
void pause(void);
void checkInputSuccess(void);
void error( string message );
void flushInput(void);
string getUnitType(string unit);


#endif
