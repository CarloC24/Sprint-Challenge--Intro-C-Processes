#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *dir;
  struct dirent *sd;
  struct stat buf;
  char *currdir;
  // Open directory
  dir = opendir(argv[1] ? argv[1] : ".");
  if (dir == NULL)
  {
    printf("Cannot read the directory you put \n");
    exit(1);
  }
  // Repeatly read and print entries
  while ((sd = readdir(dir)) != NULL)
  {
    stat(sd->d_name, &buf);
    if (sd->d_type == 4)
    {
      printf("<DIR> %s \n", sd->d_name);
    }
    else
    {
      printf("%llu %s \n", buf.st_size, sd->d_name);
    }
  }
  // Close directory
  closedir(dir);
  return 0;
}