#include "../utils.h"

int32_t main() {
    char* puzzleInput = read_puzzle_input("part3.txt");
    uint64_t puzzleInputLength = strlen(puzzleInput);

    uint64_t potionsCount = 0;
    for (uint64_t i = 0; i < puzzleInputLength; i++) {
        uint8_t enemiesCount = 0;
        for (uint8_t j = 0; j < 3; j++)
            enemiesCount += puzzleInput[i + j] == 'x' ? 0 : 1;

        if (enemiesCount == 2)
            potionsCount += 2;
        else if (enemiesCount == 3)
            potionsCount += 6;

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
