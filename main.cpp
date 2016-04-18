#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
//#include "game.h"
#include "dork.h"

using namespace std;

int main(int argc,char *argv[])
{
int lineNum = 0;


	display_init();
	
	clearDisplay(1);
	printw("hello");
	getch();

	display_close();


return 0;
}
