#include "dork.h"

#ifndef GAME_H
#define GAME_H

class Game {
private:
	string name;
	int xloc;
	int yloc;
	string location;
	int energy;
	int steps;
public:
	Game();
	void New_Game();
	string getName() {return name;}
	string getLocation() {return location;}
	int getEnergy() {return energy;}
	int getSteps() {return steps;}
	//Game(string in_name, string in_location, int in_energy, int in_steps);
	//void display_banner();
	//void addlevel(int in_level);
	//void energy(int in_energy);	
};

void display_banner(Game& user);

#endif
