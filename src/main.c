#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "arguments.h"

// Main
int main(int args_amt, char *args[]) {
    args_amt--;
    return handle_args(args_amt, args);
}

// Handle the arguments
int handle_args(int args_amt, char *args[]) {
    if(args_amt != 1) {
        printf("Usage: xrootd <start|stop|restart>");
        return 1;
    }
    if(strcmp(args[1], "start") == 0) {
        return start();
    } else if(strcmp(args[1] ,"stop") == 0) {
        return stop();
    } else if(strcmp(args[1] ,"restart") == 0) {
        return restart();
    }
    return 1;
}

char* get_command_output(char[] command) {
    return "";
}

// Start
int start() {
    return 0;
}

// Stop
int stop() {
    return 0;
}

// Restart
int restart() {
    return 0;
}
