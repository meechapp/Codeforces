//
// Created by meech on 17.07.2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXN 100005

int h[MAXN];
bool visited[MAXN];

int max(int a, int b) { return a > b ? a : b; }
int abs_diff(int a, int b) { return a > b ? a - b : b - a; }

bool dfs(int i, int n, int time, int max_h) {
    if (visited[i]) return false;
    if (h[i] == max_h) return true;

    visited[i] = true;

    for (int j = 0; j < n; ++j) {
        if (visited[j]) continue;
        int t = abs_diff(h[i], h[j]);
        if (time + t < h[i]) {
            if (dfs(j, n, time + t, max_h))
                return true;
        }
    }

    return false;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n; i++)
            scanf("%d", &h[i]);

        int max_h = h[0];
        for (int i = 1; i < n; i++)
            if (h[i] > max_h)
                max_h = h[i];

        for (int i = 0; i < n; i++)
            visited[i] = false;

        if (h[k - 1] == max_h) {
            printf("YES\n");
            continue;
        }

        if (dfs(k - 1, n, 0, max_h))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}