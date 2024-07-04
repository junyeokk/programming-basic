#include <stdio.h>

int kineticEnergy(int weight, int velocity) { return 0.5 * weight * velocity * velocity; }

int main() {
    int weight, velocity;

    scanf("%d %d", &weight, &velocity);
    printf("%d", kineticEnergy(weight, velocity));
}