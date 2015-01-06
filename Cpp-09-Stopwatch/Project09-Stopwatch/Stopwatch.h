//  Stopwatch.h

#include <time.h>

#ifndef STOPWATCH_LOCK
#define STOPWATCH_LOCK

class Stopwatch
{
public:
    // constructor
    Stopwatch(void);

    // modifiers
    void toggle();
    void reset();

    // status
    time_t split();
    bool isRunning();

private:
    time_t startTime;
    time_t endTime;
    long elapsedTime;
    bool running;
};

#endif