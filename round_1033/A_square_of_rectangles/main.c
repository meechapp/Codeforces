#include <stdio.h>

typedef struct {
    int w, h;
} Rect;

void swap(Rect *a, Rect *b) {
    Rect tmp = *a;
    *a = *b;
    *b = tmp;
}

int can_form_square(Rect a, Rect b, Rect c) {
    for (int i = 0; i < 6; i++) {
        // 1) Check if all widths equal and heights sum to width (stack vertically)
        if (a.w == b.w && b.w == c.w && a.h + b.h + c.h == a.w)
            return 1;

        // 2) Check if all heights equal and widths sum to height (stack horizontally)
        if (a.h == b.h && b.h == c.h && a.w + b.w + c.w == a.h)
            return 1;

        // 3) Check L shape:
        // a and b side by side horizontally, c on top:
        // widths of a and b sum == c.w
        // height of c + max height(a,b) == c.w (square side)
        if ((a.h == b.h) && (a.w + b.w == c.w) && (c.h + a.h == c.w))
            return 1;

        // 4) Check L shape:
        // a and b stacked vertically, c on side:
        // heights of a and b sum == c.h
        // width of c + max width(a,b) == c.h (square side)
        if ((a.w == b.w) && (a.h + b.h == c.h) && (c.w + a.w == c.h))
            return 1;

        // Next permutation of a,b,c
        if (i == 0) swap(&b, &c);
        else if (i == 1) swap(&a, &b);
        else if (i == 2) swap(&b, &c);
        else if (i == 3) swap(&a, &b);
        else if (i == 4) swap(&b, &c);
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        Rect a, b, c;
        scanf("%d%d%d%d%d%d", &a.w, &a.h, &b.w, &b.h, &c.w, &c.h);
        printf(can_form_square(a, b, c) ? "YES\n" : "NO\n");
    }
    return 0;
}