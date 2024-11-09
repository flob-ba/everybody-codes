#include "../utils.h"

int64_t solve(const char* puzzle, int64_t puzzleLength) {
    return -1;
}

int32_t main() {
    const char* puzzleTest = "";
    int64_t testExpect = -1;
    int64_t testResult = solve(puzzleTest, strlen(puzzleTest));

    if (solve(puzzleTest, strlen(puzzleTest)) != testExpect) {
        printf("TEST FAILED\nExpected: %ld\nGot: %ld\n", testExpect, testResult);
        return 1;
    }

    char* puzzle = read_puzzle_input("part1.txt");
    printf("Result: %ld\n", solve(puzzle, strlen(puzzle)));
}
