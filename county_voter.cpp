#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <sstream>
#include <vector>

#inlcude "State.h"

using namespace std;

int main() {
	//Declare the Lower 48
	State Alabama("Alabama"), Arizona("Arizona"), Arkansas("Arkansas"), California("California"), Colorado("Colorado"), Connecticut("Connecticut");
	State Delaware("Delaware"), Florida("Florida"), Georgia("Georgia"), Idaho("Idaho"), Illinois("Illinois"), Indiana("Indiana");
	State Iowa("Iowa"), Kansas("Kansas"), Kentucky("Kentucky"), Louisiana("Louisiana"), Maine("Maine"), Maryland("Maryland"), Massachusetts("Massachusetts");
	State Michigan("Michigan"), Minnesota("Minnesota"), Mississippi("Mississippi"), Missouri("Missouri"), Montana("Montana"), Nebraska("Nebraska");
	State Nevada("Nevada"), New_Hampshire("New Hampshire"), New_Jersey("New Jersey"), New_Mexico("New Mexico"), New_York("New York"), North_Carolina("North Carolina");
	State North_Dakota("North Dakota"), Ohio("Ohio"), Oklahoma("Oklahoma"), Oregon("Oregon"), Pennsylvania("Pennsylvania"), Rhode_Island("Rhode Island"); 
	State South_Carolina("South Carolina"), South_Dakota("South Dakota"), Tennessee("Tennessee"), Texas("Texas"), Utah("Utah"), Vermont("Vermont"), Virginia("Virginia"); 
	State Washington("Washington"), West_Virginia("West Virginia"), Wisconsin("Wisconsin"), Wyoming("Wyoming");
	
	//Build the county adjacency matrix
	int adjacency_matrix[56046][56046], county_code;
	string line, section;
	for (int i = 0; i < 56046; i++)
		for (int j = 0; j <= 56046; j++)
			adjacency_matrix[i][j] = 0;
	ifstream inFile;
	inFile.open("county_adjacency.txt");
	while (getline(inFile, line)) {
		istringstream ss_line(line);
		getline(ss_line,section,','));
		county_code = atoi(section);
		while (getline(ss_line,section,','))
			adjacency_matrix[county_code][atoi(section)] = 1;
	}
	inFile.close;
}