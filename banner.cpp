#include "dork.h"
#include "game.h"

void display_banner(Game& user) {
	clearDisplay(1);
	printw("--------------------------------------------------------------------------\n");
	printw("Hello "); printw("%s", user.getName().c_str()); 
	printw ("!!!\tLocation: "); printw("%s",user.getLocation().c_str()); 
	printw("\tEnergy: "); printw("%d", user.getEnergy()); 
	printw("\tSteps: "); printw("%d", user.getSteps(), "\n");
	printw("\n--------------------------------------------------------------------------\n");
	refresh();
}
