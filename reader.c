#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

main()
{
 char zone[11];
 int tub;

 /*ouverture du tube*/
 tub = open("fictub",O_RDONLY);

 /*lecture dans le tube*/
 read(tub,zone,10);
 zone[10] = 0;

 printf("processus lecteur du tube fictub : %s",zone);

 /*fermeture du tube*/
 close(tub);
}

