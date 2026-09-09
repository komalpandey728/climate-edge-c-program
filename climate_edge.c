#include <stdio.h>

int main() {
    float t1, t2, t3, avg;

    printf("Enter 3 temperatures: ");
    scanf("%f %f %f", &t1, &t2, &t3);

    avg = (t1 + t2 + t3) / 3;

    printf("Average Temperature = %.2f C\n", avg);

    if (avg >= 40)
        printf("Heatwave Risk: HIGH\n");
    else if (avg >= 35)
        printf("Heatwave Risk: WARNING\n");
    else
        printf("Heatwave Risk: NORMAL\n");

    return 0;
}
