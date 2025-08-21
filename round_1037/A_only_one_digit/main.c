#include <stdio.h>
#include <stdbool.h>

bool has_common_digit(int x, int y) {
    bool digits_x[10] = {false};
    while (x > 0) {
        digits_x[x % 10] = true;
        x /= 10;
    }

    if (y == 0 && digits_x[0]) return true;
    while (y > 0) {
        if (digits_x[y % 10]) return true;
        y /= 10;
    }
    return false;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        for (int y = 0; ; ++y) {
            if (has_common_digit(x, y)) {
                printf("%d\n", y);
                break;
            }
        }
    }
    return 0;
}