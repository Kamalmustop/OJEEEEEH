#include <stdio.h>

int main() {
    char GMT[11];
    int start_hour, start_minute, end_hour, end_minute;

    scanf("%s %d:%d-%d:%d", GMT, &start_hour, &start_minute, &end_hour, &end_minute);
    start_hour -= 1;
    end_hour -= 1;
    printf("%s %02d:%02d-%02d:%02d\n", GMT, start_hour, start_minute, end_hour, end_minute);


    scanf("%s %d:%d-%d:%d", GMT, &start_hour, &start_minute, &end_hour, &end_minute);
    start_hour -= 1;
    end_hour -= 1;
    printf("%s %02d:%02d-%02d:%02d\n", GMT, start_hour, start_minute, end_hour, end_minute);


    scanf("%s %d:%d-%d:%d", GMT, &start_hour, &start_minute, &end_hour, &end_minute);
    start_hour -= 1;
    end_hour -= 1;
    printf("%s %02d:%02d-%02d:%02d\n", GMT, start_hour, start_minute, end_hour, end_minute);


    scanf("%s %d:%d-%d:%d", GMT, &start_hour, &start_minute, &end_hour, &end_minute);
    start_hour -= 1;
    end_hour -= 1;
    printf("%s %02d:%02d-%02d:%02d\n", GMT, start_hour, start_minute, end_hour, end_minute);


    scanf("%s %d:%d-%d:%d", GMT, &start_hour, &start_minute, &end_hour, &end_minute);
    start_hour -= 1;
    end_hour -= 1;
    printf("%s %02d:%02d-%02d:%02d\n", GMT, start_hour, start_minute, end_hour, end_minute);

    return 0;
}
