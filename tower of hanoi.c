#include <stdio.h>

void towerOfHanoi(int n, char a, char b, char c) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", a, c);
        return;
    }

    towerOfHanoi(n - 1, a, c, b);
    printf("Move disk %d from rod %c to rod %c\n", n, a, c);
    towerOfHanoi(n - 1, b, a, c);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("The sequence of moves are:\n");
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
