#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;
char *_getenv(char *path)
{
	int i;
	char *var, *val;

	for (i = 0; environ[i] != NULL; i++)
	{
	
		var = strtok(environ[i], "=");
		if (strcmp(var, path) == 0)
		{
			val = strtok(NULL, "=");
			return (val);
		}
		i++;
	}
}


int main(void)
{
	char *path_val;

	path_val = _getenv("PATH");

	printf("%s\n", path_val);

	return (0);
}
