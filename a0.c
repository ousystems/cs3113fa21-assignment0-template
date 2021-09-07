#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int boomersooner() {
    // TODO write code here
    return -1;
}

int main (int argc, char **argv) {
    int result; 

    // Error Check
    if (argc > 1) {
        dprintf(STDERR_FILENO, "Usage: %s <n>\n", argv[0]);
        exit(0);
    }
    else {
        dprintf(STDERR_FILENO, "Starting BoomerSooner...\n");
    }

    // Call the function to print out values
    result = boomersooner();

    return result; // Return program status
}