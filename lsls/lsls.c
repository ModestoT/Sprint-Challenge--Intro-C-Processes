#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  struct dirent *ent;
  DIR *dir;
  // Parse command line
  if (argc < 2){
    dir = opendir(".");
    
    while((ent = readdir(dir)) != NULL){
      printf("%s\n", ent->d_name);
    }   

    closedir(dir);
  } else {
  //   Call opendir().
  dir = opendir(argv[1]);
  //   Then repeatedly call readdir()--printing the filenames as you go--until it lets you know there are no more directory entries by returning NULL.
  //   Then call closedir().
  closedir(dir);
  }

  return 0;
}