//  Stopwatch.cpp

#include "Stopwatch.h"
#include <time.h>
#include <iostream>
using namespace std;

// constructor
Stopwatch::Stopwatch(void)
{
    reset();
}

// stops the stopwatch (if it is running) and clears the elapsed time
void Stopwatch::reset()
{
    running = false;
    elapsedTime = 0;
}

// turns the Stopwatch on/off
void Stopwatch::toggle()
{
    if (running)
    {
        running = false;
        endTime = time(0); // time_t endTime = time(0) when stopwatch stops at a later time
        elapsedTime = endTime - startTime + elapsedTime;
    }
    else
    {
        running = true;
        startTime = time(0); // time_t startTime = time(0) when stopwatch starts
    }
}

// returns the current elapsed time, in seconds
time_t Stopwatch::split()
{
    if (running)
    {
        endTime = time(0);
        return elapsedTime + endTime - startTime;
    }
    else
    {
        return elapsedTime;
    }
}

// indicates whether or not elasped time is curently accumulating
bool Stopwatch::isRunning()
{
    return running;
}