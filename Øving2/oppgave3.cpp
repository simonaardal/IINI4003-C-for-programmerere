#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;



int main(){
    char *line = nullptr;   // eller char *line = 0;
    strcpy(line, "Dette er en tekst");

    printf ("line: %s", line);

}

