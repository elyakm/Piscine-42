#include <stdio.h>
#include <string.h>

int main(void)
{
    char    str[] = "René aimes le caca et le pipi";
    char    to_find[] = "caca";
    printf("%s\n", strstr(str, to_find));
}

	// i = 0;  loop sur str du début à la fin
	// j = 0;  loop sur le to_find à partir de la position du i (là où il trouve le to_find dans le str)