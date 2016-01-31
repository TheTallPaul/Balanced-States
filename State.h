#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

using namespace std;

#ifndef STATE_H
#define STATE_H

class State {
	private:
		int population;
		string name;
		vector<string> county_codes;
	public:
		State(string);
		int get_population();
		int get_num_counties();
		void add_county(string);
}

#endif