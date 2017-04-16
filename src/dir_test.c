#include <unistd.h>
#include <cstdio>

int main()
{
    const size_t BUF_SIZE = 128;
    char buf[BUF_SIZE];
    getcwd(buf, sizeof(buf));
    printf("current working directory : %s\n", buf);
}
