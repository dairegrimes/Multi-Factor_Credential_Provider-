#ifndef KeystrokeDynamics_H
#define KeystrokeDynamics_H

using namespace std;


#include <windows.h>
#include "bthdef.h"
#include <tchar.h>
#include <string>
#include <iostream>
#include <vector>
#include <ws2bth.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <conio.h>
#include <ciso646>
#include "Clock.h"
#include <fstream>

class KeystrokeDynamics
{

public:

	KeystrokeDynamics();
	~KeystrokeDynamics();
	vector<double> KeySwitchTime;
	vector<double> diff;
	vector<double> average;
	void getKeystrokes(double duration);

	double keyDown = 0;
	double keyHold = 0;
	double keyUp = 0;
	double holdTime = 0;
	double switchTime = 0;
	double total = 0;
	double speed = 0;
	int result = 0;
	
	bool getAverage(vector<double> KeySwitchTime);

	



private:

	

};

#endif 

// C:\\Users\\daire\\Desktop\\QRCODEFILE.txt
