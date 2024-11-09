#include "utils.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

char* read_puzzle_input(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Failed to open %s!", filename);
        return NULL;
    }

    uint64_t contentLength = 0;
    while (fgetc(file) != EOF)
        contentLength++;

    char* content = malloc(contentLength + 1);
    rewind(file);
    char c;
    for (uint64_t i = 0; i < contentLength; i++)
        content[i] = fgetc(file);
    content[contentLength] = '\0';

    return content;
}
