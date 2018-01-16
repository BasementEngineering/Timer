#ifndef TIMER_H
#define TIMER_H

#include <Arduino.h>

class Timer{
public:
Timer(unsigned long milliseconds = 0, bool autoReset = false);

void start();
void reset();
bool isFinished();
unsigned long getRunTime();
void stop();
bool isActive();
void setInterval(unsigned long milliseconds);
void setAutoReset(bool mode);

private:
unsigned long interval;
unsigned long startTime;
bool autoReset;  
bool active;
};

#endif

