/*
** EPITECH PROJECT, 2018
** cat
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>


int	if_existing(char *str)
{
    int size;

    if ((size = open(str, O_RDONLY)) == -1) {
        my_putstr("cat: ");
        my_putstr(str);
        my_putstr(": No such file or directory\n");
        return (84);
    }        
    return 0;
}


int     main(int ac, char *av[])
{
    int file;
    int i = 1;
    char buffer[3];
    int	fd;

    if(ac == 1)
        write(1, buffer, my_strlen(buffer));
    while(i <= ac && av[i] != NULL) {
        if((fd = if_existing(av[i])) != 84) { 
            fd = open(av[i], O_RDONLY);
            while ((file = read(fd, buffer, 2)) != 0 || !EOF)
                write(1, buffer, 2);
        }  else {
            return (84);
        }
        i++;
    }
    close(fd);
    return (0);   
}
