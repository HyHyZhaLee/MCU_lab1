/*
 * software_timer.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Admin
 */


#include "software_timer.h"

const int TICK = 10;
int timer_counter = 0;
int timer_flag = 0;

void setTimer(int duration){
	timer_counter = duration/TICK;
	timer_flag = 0;
}
void timerRun(){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag = 1;
		}
	}
}

