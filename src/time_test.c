#include <time.h>
#include <unistd.h>
#include <cstdio>
#include <cstring>

int main() {

    time_t time1 = time(NULL);
    printf("current time: %ld\n", time1);
    sleep(3);
    time_t time2 = time(NULL);
    printf("current time: %ld\n", time2);

    struct tm cur_tm1;
    localtime_r(&time1, &cur_tm1);

    char asctime_str[64];
    memset(asctime_str, 0, sizeof(asctime_str));
    printf("asctime_r: %s", asctime_r(&cur_tm1, asctime_str));
    memset(asctime_str, 0, sizeof(asctime_str));
    printf("ctime_str: %s", ctime_r(&time2, asctime_str));

    char time_str1[128];
    memset(time_str1, 0, 128);
    strftime(time_str1, 128, "%Y-%m-%d %H:%M:%S", &cur_tm1);
    printf("time_str1: %s\n", time_str1);

    localtime_r(&time2, &cur_tm1);
    char time_str2[128];
    memset(time_str2, 0, 128);
    strftime(time_str2, 128, "%Y-%m-%d %H:%M:%S", &cur_tm1);
    printf("time_str2: %s\n", time_str2);

    time_t time3 = 1509268476;
    localtime_r(&time3, &cur_tm1);
    time_t time_make = mktime(&cur_tm1);
    printf("time_make: %ld\n", time_make);

}
