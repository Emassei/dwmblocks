// What these things mean:
//
// Icon: Which icon you want to have before the output of the script on the statusbar.
// Command: Which command you want to run.
// Update Interval: The number of seconds you want to update it, i.e. every 5 seconds, every 60 = 1 min.
// Update Signal: This is a singal number linked to the script to avoid running the script on a loop, you
// invoke the script by the signal number, i.e. I push the volume up button, singal 10 is run and volume status
// is updated.

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
<<<<<<< HEAD
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"music",	0,	11},*/
	//{"",	"pacpackages",	0,	8},
	//{"",	"gcal",	        600,	0},
	//{"",	"spanish_word",	600,	0},
	{"",	"corona",	18000,	0},
	//{"",	"crypto",	0,	13},
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	//{"",	"torrent",	20,	7},
	{"",	"memory",	10,	14},
	/* {"",	"cpu",		10,	18}, */
	 {"",	"moonphase",	18000,	17},
	//{"",	"weather",	18000,	5},
	//{"",	"mailbox",	180,	12},
	/* {"",	"nettraf",	1,	16}, */
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"clock",	60,	1},
	{"",	"internet",	5,	4},
        /* {"",	"help-icon",	0,	15}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
