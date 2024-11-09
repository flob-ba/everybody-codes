#include "../utils.h"

int32_t main() {
    char* puzzleInput = read_puzzle_input("part1.txt");
    uint64_t puzzleInputLength = strlen(puzzleInput);

    uint64_t potionsCount = 0;
    for (uint64_t i = 0; i < puzzleInputLength; i++) {
        if (puzzleInput[i] == 'B')
            potionsCount += 1;
        else if (puzzleInput[i] == 'C')
            potionsCount += 3;
    }

    printf("%ld potions\n", potionsCount);
}
