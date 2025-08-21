//
// Created by meech on 21.08.2025.
//

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        char a[21], b[11], c[11];  // max lengths +1 for '\0'
        char result[32];            // max n+m = 20 + 10 = 30 +1

        scanf("%d", &n);
        scanf("%s", a);

        scanf("%d", &m);
        scanf("%s", b);
        scanf("%s", c);

        strcpy(result, a); // start with string a

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                // Vlad adds at beginning
                int len = strlen(result);
                // shift right by 1
                for (int j = len; j >= 0; j--) {
                    result[j + 1] = result[j];
                }
                result[0] = b[i];
            } else {
                // Dima adds at end
                int len = strlen(result);
                result[len] = b[i];
                result[len + 1] = '\0';
            }
        }

        printf("%s\n", result);
    }

    return 0;
}