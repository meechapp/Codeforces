//
// Created by meech on 17.07.2025.
//
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int hikes = 0;
        int i = 0;

        while (i <= n - k) {
            int good = 1;
            for (int j = 0; j < k; j++) {
                if (a[i + j] != 0) {
                    good = 0;
                    break;
                }
            }

            if (good) {
                hikes++;
                i += k + 1;  // Skip k days + 1 rest day
            } else {
                i++;
            }
        }

        printf("%d\n", hikes);
    }
    return 0;
}