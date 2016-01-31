#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

#include "State.h"

using namespace std;

State::State(string full_name) {
	name = full_name;
}

int State::get_population() {
	return population;
}

int State::get_num_counties() {
	return county_codes.size();
}

void State::add_county(string code) {
	county_codes.push_back(code);
}
