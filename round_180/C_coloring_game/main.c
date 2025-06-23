//O(n3)
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[5000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int max_val = a[n - 1]; // array sorted, last element is max
        int count = 0;

        // Enumerate all triplets
        for (int i = 0; i < n - 2; i++) {
            int r1 = a[i];
            for (int j = i + 1; j < n - 1; j++) {
                int r2 = a[j];
                for (int k = j + 1; k < n; k++) {
                    int r3 = a[k];
                    int red_sum = r1 + r2 + r3;

                    // Prune by max element: sum must be > max element in array
                    if (red_sum <= max_val) continue;

                    // Check condition for each red element:
                    // red_sum - red_element must be strictly greater than red_element
                    if (red_sum - r1 <= r1) continue;
                    if (red_sum - r2 <= r2) continue;
                    if (red_sum - r3 <= r3) continue;

                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}


//O(n4)
/*#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[5000];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }

        int count = 0;

        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    int r1 = a[i], r2 = a[j], r3 = a[k];
                    int red_sum = r1 + r2 + r3;

                    int valid = 1;
                    for (int x = 0; x < n; ++x) {
                        int b = a[x];
                        int reduced_sum = red_sum;
                        // If Bob picks a red one, remove it
                        if (b == r1 || b == r2 || b == r3) {
                            reduced_sum -= b;
                        }
                        if (reduced_sum <= b) {
                            valid = 0;
                            break;
                        }
                    }

                    if (valid)
                        ++count;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}*/