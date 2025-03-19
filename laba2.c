#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int n;
    double sumX = 0, sumY = 0, sumZ = 0, sumM = 0;
    
    printf("Введіть кількість точок: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i += 1) {
        double x, y, z, m;
        printf("Введіть координати (x, y, z) та масу m для точки %d: ", i + 1);
        scanf("%lf %lf %lf %lf", &x, &y, &z, &m);
        
        sumX += x * m;
        sumY += y * m;
        sumZ += z * m;
        sumM += m;
    }

    if (sumM != 0) {
        printf("Координати центра тяжіння: (%.2lf, %.2lf, %.2lf)\n", sumX / sumM, sumY / sumM, sumZ / sumM);
    } else {
        printf("Сумарна маса нульова, центр тяжіння не визначено.\n");
    }
    return 0;
}