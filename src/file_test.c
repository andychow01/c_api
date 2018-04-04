#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>


void file_test()
{
    int fd = open("outfile.txt", O_WRONLY|O_CREAT|O_TRUNC, 0644);
    printf("fd = %d\n", fd);
    char write_buff[] = "abcdef";
    ssize_t nwrite = write(fd, write_buff, sizeof(write_buff));
    printf("write len:%d\n", nwrite);
    close(fd);

    char read_buff[80];
    fd = open("outfile.txt", O_RDONLY);
    ssize_t len = read(fd, read_buff, 80);
    printf("read len:%d\n", len);
    printf("content:%s\n", read_buff);
    close(fd);

}

int main()
{
    file_test();
}




