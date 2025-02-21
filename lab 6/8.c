#include <stdio.h>
#include <string.h>

int main() {
    const char *s1_1 = "Az";
    const char *s1_2 = "aZ";
    if (strcmp(s1_1, s1_2) > 0)
        printf("%s\n", s1_1);
    else
        printf("%s\n", s1_2);

    const char *s2_1 = "ABCDEF";
    const char *s2_2 = "a";
    if (strcmp(s2_1, s2_2) > 0)
        printf("%s\n", s2_1);
    else
        printf("%s\n", s2_2);

    const char *s3_1 = "sushi-roll";
    const char *s3_2 = "unagi";
    if (strcmp(s3_1, s3_2) > 0)
        printf("%s\n", s3_1);
    else
        printf("%s\n", s3_2);

    return 0;
}
