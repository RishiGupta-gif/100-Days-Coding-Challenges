#include <stdio.h>

int main() {
    char s[20];
    char day[3], month[3], year[5];

    scanf("%s", s);

    day[0] = s[0];
    day[1] = s[1];
    day[2] = '\0';

    month[0] = s[3];
    month[1] = s[4];
    month[2] = '\0';

    year[0] = s[6];
    year[1] = s[7];
    year[2] = s[8];
    year[3] = s[9];
    year[4] = '\0';


    printf("%s-Apr-%s", day, year);

    return 0;
}
