//  testStopwatch.h

#include "Stopwatch.h"
#include <string>
using namespace std;

#ifndef TEST_STOPWATCH_LOCK
#define TEST_STOPWATCH_LOCK

void testStopwatch(void);
string getAndCheckInput(void);
void doChoice(string choice, Stopwatch &stopwatch);

#endif
