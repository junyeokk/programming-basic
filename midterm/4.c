#include <math.h>
#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    double sumx2 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double temp;
        scanf("%lf", &temp);
        sum += temp;
        sumx2 += temp * temp;
    }

    printf("%lf\n", sum / n);
    printf("%.3f", sqrt((sumx2 / n) - ((sum / n) * (sum / n))));
}
