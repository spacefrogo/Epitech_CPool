/*
** EPITECH PROJECT, 2018
** nmatch.c
** File description:
** nmatch.c
*/

int     my_strlen(char const *str)
{
    int k = 0;
    while(str[k] != '\0') {
        k++;
    }
    return k;
}

int	match(char const *s1, char const *s2)
{
    int i = 0;
    int j;
    int nb_of_charS1 = my_strlen(s1);
    int nb_of_charS2 = my_strlen(s2);
    
    while(s1[i] != '\0') {
	for(j = 0; s2[j] != '\0'; j++) {
            if((s1[i] == s2[j] && nb_of_charS1 == nb_of_charS2) || s2[j] == '*') 
		return 1;
            else if(s1[i] != s2[j]) 
		return 0;
	}
        i++;
    }
}



int     main(int ac, char *argv[])
{
    int j;
    j = match(argv[1], argv[2]);
    printf("%s - %s : %d",argv[1], argv[2], j);
    return(0);
}
