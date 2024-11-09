#include "../utils.h"

int32_t main() {
    char* puzzleInput = read_puzzle_input("part2.txt");
    uint64_t puzzleInputLength = strlen(puzzleInput);

    uint64_t potionsCount = 0;
    for (uint64_t i = 0; i < puzzleInputLength; i++) {
        bool isDoubleBattle = puzzleInput[i] != 'x' && puzzleInput[i + 1] != 'x';
        potionsCount += isDoubleBattle ? 2 : 0;

        if (puzzleInput[i] == 'B')
            potionsCount += 1;
        else if (puzzleInput[i] == 'C')
            potionsCount += 3;
        else if (puzzleInput[i] == 'D')
            potionsCount += 5;

        i++;

        if (puzzleInput[i] == 'B')
            potionsCount += 1;
        else if (puzzleInput[i] == 'C')
            potionsCount += 3;
        else if (puzzleInput[i] == 'D')
            potionsCount += 5;
    }

    printf("%ld potions\n", potionsCount);
}
