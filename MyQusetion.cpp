#include <stdio.h>

int main(){

    int x1, x2, x3, x4, x5;
    int y1, y2, y3, y4, y5;
    int dag;


    scanf("%d %d\n", &x1, &y1);
    scanf("%d %d\n", &x2, &y2);
    scanf("%d %d\n", &x3, &y3);
    scanf("%d %d\n", &x4, &y4);
    scanf("%d %d\n", &x5, &y5);

    scanf("%d", &dag);

    if(dag - 273 > 25) {
        printf("%d\nOutdoor", (dag - 273));
    }
    else {
        printf("%d\nIndoor", (dag - 273));
    }

    return 0;
}