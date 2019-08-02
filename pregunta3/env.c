#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

#include <stdlib.h>
#include <string.h>

int main (int argc, char** argv)
{
	if(argc != 2)
	{
		printf("Error: Ingresar unicamente un dato.\n");
		exit(0);
	}
	char argumentos[60];
	strcpy(argumentos, "/");
	strcat(argumentos, argv[1]);
	char *path_dividido;
	char programa[100];
       	char *path = getenv("PATH");
	path_dividido = strtok (path,":");//particion 
	int flag = 0;//Bandera de encontrado!
	while (path_dividido!= NULL)
	{
		programa[0]='\0';//Inicializando
                strcat(programa, path_dividido);
		strcat(programa, argumentos);
                if(access(programa, F_OK) != -1 ) 
		{ 
                        char *const todo[]={argv[1],NULL};
                        execvp(todo[0],argv);                        
                   	flag++;
		}
		path_dividido = strtok (NULL, ":");
	}
             if(flag == 0)
		printf("Imposible ejecutar. No encontrado en PATH.\n");

	return 0;
}
