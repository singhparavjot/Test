//fifopipwriter

#include<stdio.h> //printf()
#include<string.h> //strlen()
#include<unistd.h>//read()
#include<sys/stat.h> //mknod()
#include<fcntl.h> //O_RDONLY
int main()
{ int fd, nbw;
 char str[100];
 mknod("myfifo", S_IFIFO |0666, 0); // creates a special or ordinary file, path or filename is the first argument; second agrument represents the permissions to be used ored with the file type can be S_IFREG, S_IFIFO, S_IFCHR, S_IFBLK, S_IFSOCK etc. If the file is block type or char type in that case 3rd agru. is used otherwise ignored. Here it is ignored using 0.
 printf("Waiting for reader process : \n\t");
 fd = open("myfifo", O_WRONLY);
 while(gets(str)) //reads a string from stdin stores in a string stores pointed by str and stops when the newline character is reacher or eof is reached; whichever comes first
 {
 nbw =  write(fd, str, strlen(str));
 printf("Writer process writ %d bytes : %s \n", nbw, str);
}
}

