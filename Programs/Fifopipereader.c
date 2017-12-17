//fifopipereader
#include<stdio.h> //printf()
#include<string.h> //strlen()
#include<unistd.h>//read()
#include<sys/stat.h> //mknod()
#include<fcntl.h> //O_RDONLY

int main()
{ 
 int fd, nbr;
 char arr[100];
 fd = open("myfifo", O_RDONLY);
printf("if you got a  writer process then type some data");
do
 { 
 nbr = read(fd, arr, sizeof(arr));
 arr[nbr] = '\0';
printf("Reader process read %d bytes : %s\n", nbr, arr);
}
 while(nbr>0);
}
