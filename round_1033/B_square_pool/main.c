#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        long long s;
        scanf("%d %lld", &n, &s);

        int result = 0;

        for (int i = 0; i < n; ++i) {
            int dx, dy;
            long long x, y;
            scanf("%d %d %lld %lld", &dx, &dy, &x, &y);

            long long dx_dist = (dx == 1) ? (s - x) : x;
            long long dy_dist = (dy == 1) ? (s - y) : y;

            if (dx_dist == dy_dist) {
                result++;
            }
        }

        printf("%d\n", result);
    }

    return 0;
}