#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, x, y;
        scanf("%d %d %d", &a, &x, &y);

        int alice_dist_x = abs(a - x);
        int alice_dist_y = abs(a - y);

        int found = 0;
        for (int b = 1; b <= 100; ++b) {
            if (b == a) continue;
            int bob_dist_x = abs(b - x);
            int bob_dist_y = abs(b - y);
            if (bob_dist_x < alice_dist_x && bob_dist_y < alice_dist_y) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}