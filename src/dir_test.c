#include <unistd.h>
#include <dirent.h>
#include <cstdio>


void path_test()
{
    const size_t BUF_SIZE = 128;
    char buf[BUF_SIZE];
    chdir("/tmp/");
    getcwd(buf, sizeof(buf));
    printf("current working directory: %s\n", buf);

    chdir("/home/zhou/source/c_api");
    getcwd(buf, sizeof(buf));
    printf("current working directory: %s\n", buf);
}


void traverse_dir()
{
    DIR* dp = opendir("./");
    struct dirent *entry = NULL;
    while ((entry = readdir(dp)) != NULL)
    {
        printf("dir_name: %s\n", entry->d_name);
    }
    closedir(dp);
}

int main()
{
    traverse_dir();
}




