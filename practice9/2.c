#include <stdio.h>

char scoreToGrade(int score) { return score >= 90 ? 'A' : (score >= 80 ? 'B' : (score >= 70 ? 'C' : (score >= 60 ? 'D' : 'F'))); }

int main() {
    while (1) {
        int score;
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        printf("%c\n", scoreToGrade(score));
    }
}