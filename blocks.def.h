//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "battery",		60,		0},
	{"", "volume",		0,		1},
	{"", "ramusage",	10,		0},
	{"", "avspace",		60,		0},
	{"", "localtime",	10,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
