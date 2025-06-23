#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int *a = malloc(n * sizeof(int));

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int has_beautiful = 0;
        int all_far = 1;

        for (int i = 0; i < n - 1; i++) {
            int d = abs(a[i] - a[i+1]);
            if (d <= 1)
                has_beautiful = 1;
            if (d <= 2)
                all_far = 0;
        }

        if (has_beautiful)
            printf("0\n");
        else if (all_far)
            printf("-1\n");
        else
            printf("1\n");

        free(a);
    }

    return 0;
}