#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
/**
 * Main
 */
int main(int argc, char **argv)
{
  struct stat buf;
  struct dirent *ent;
  DIR *dir;

  // Parse command line
  if (argc < 2){
    dir = opendir(".");
    
    while((ent = readdir(dir)) != NULL){
      // printf("Example path: ./%s\n", ent->d_name);
      stat(ent->d_name, &buf);
      printf("%ld ", buf.st_size);
      printf("%s\n", ent->d_name);
    }   

    closedir(dir);
  } else {
    //   Call opendir().
    dir = opendir(argv[1]);

    if (dir == NULL){
      printf("Cannot open directory '%s'\n", argv[1]);
      return 1;
    }

    //   Then repeatedly call readdir()--printing the filenames as you go--until it lets you know there are no more directory entries by returning NULL.
    while((ent = readdir(dir)) != NULL){
      stat(ent->d_name, &buf);
      printf("%ld ", buf.st_size);
      printf("%s\n", ent->d_name);
    }
    //   Then call closedir().
    closedir(dir);
  }

  return 0;
}