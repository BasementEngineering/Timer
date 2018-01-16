#include "Timer.h"

Timer::Timer(unsigned long milliseconds, bool AutoReset) {
  active = false;
  interval = milliseconds;
  autoReset = AutoReset;
  startTime = millis();
}

void Timer::start(){ 
  active = true;
  reset();
}

void Timer::stop(){
  active = false;
}

void Timer::reset() {
  startTime = millis();
}

bool Timer::isActive(){
	return active;
}

unsigned long Timer::getRunTime(){
	if(active){
	return millis() - startTime;
	}
	else{
	return 0;
	}
}

void Timer::setInterval(unsigned long milliSeconds) {
  interval = milliSeconds;
}

void Timer::setAutoReset(bool mode){
  autoReset = mode;
}

bool Timer::isFinished() {
  if(active){
  if (millis() - startTime > interval) {
    if (autoReset) {
      reset();
    }
    return true;
  }
  }
  return false;
}


