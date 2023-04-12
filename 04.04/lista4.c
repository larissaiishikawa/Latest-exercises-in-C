# include <stdio.h>
# include <math.h>


int main() {
    int r, A, B;
    char C = 'M';
    A = 3;
    B = 16;
    r = (A + 1 >= B * 1 / 2) && (C != 'A');
    printf("%d", r);
}