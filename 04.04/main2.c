# include <stdio.h>
# include <math.h>
# include <string.h>

int main() {
    char s1[5], s2[5];
    int n;
    strcpy(s1, "acb");
    strcpy(s2, "abc");
    n = strcmp(s1, s2);
    printf("%d \n", n);
    // 1
}