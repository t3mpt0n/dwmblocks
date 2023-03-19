//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-spotify", 1, 0},

    {" ", "uname -r", 60, 0},

    {"🐏 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1, 0},

    {"🖴 ", "df -h | awk 'NR==7 { print $3\"/\"$2, \"(\"$5\")\" }'", 1, 0},

    {"", "sb-clock", 1, 0},

    {"", "sb-forecast", 1, 0},

    {"🔈", "awk -F'[][]' '/Left:/ { print $2 }' <(amixer sget Master)", 1, 0},

    // Laptop    {"🔋", "cat /sys/class/power_supply/BAT0/capacity", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "| ";
static unsigned int delimLen = 5;
