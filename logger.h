// logger settings

#define MAX_LOG 200
#define DEBUG_LVL 0
#define LOG_FOREGROUND 0 // currently doesn't really work when set to 1


enum LogLevel { DEBUG=4, INFO=3, WARNING=2, ERROR=1, NONE=0 };

const char* get_lvlname(int);
int log_msg(int, const char*, ...);
