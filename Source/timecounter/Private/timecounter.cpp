// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "timecounterPrivatePCH.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <functional>


class Fttimecounter : public Itimecounter
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};


void Ftimecounter::StartupModule()
{
	int VarHours;
	int VarMinutes;
	timer_start(counttime, 1000);

	while (true);
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void Ftimecounter::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void timer_start(std::function<void(void)> func, unsigned int interval)
{
	std::thread([func, interval]() {
		while (true)
		{
			func();
			std::this_thread::sleep_for(std::chrono::milliseconds(interval));
		}
	}).detach();
}

void counttime()
{
	int VarMinutes = + 1;

	if(int VarMinutes = 60){
		int VarHours = VarHours + 1;
	}

}

IMPLEMENT_MODULE(Ftimecounter, timecounter);