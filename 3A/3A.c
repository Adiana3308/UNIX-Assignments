#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(int argc, char **argv)
{
struct stat fileStat; stat("/home/aditi/ADnOR/Assignments/3A/readme",&fileStat); 
if(stat("/home/aditi/ADnOR/Assignments/3A/readme",&fileStat) < 0)
{
printf("Failed\n"); 
return 1;
}
printf("---------------------------\n");
printf("File Size: \t\t%ld bytes\n",(long)fileStat.st_size);
printf("Number of Links: \t%ld\n",(long)fileStat.st_nlink); printf("File inode: \t\t%ld\n",(long)fileStat.st_ino);
printf("File Permissions: \t");

printf( (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
printf( (fileStat.st_mode & S_IROTH) ? "r" : "-"); 
printf( (fileStat.st_mode & S_IWOTH) ? "w" : "- "); 
printf( (fileStat.st_mode & S_IXOTH) ? "x" : "- "); 
printf("\n\n");
printf("The file %s a symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not"); 
return 0;
}

