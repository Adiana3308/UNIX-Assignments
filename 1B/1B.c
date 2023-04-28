#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
char *args[]={"./EXEC",NULL};
execvp(args[0],args);
printf("Ending\n");
return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
printf("I am EXEC.c called by execvp()\n");
return 0;
}
