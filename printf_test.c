#include "ft_printf.c"
#include <stdio.h>
int checker (void result1, void result2)
{
	if(result1 == result2)
		return 1;
	else
		return 0;
}

int main()
{
	char *s1="Hola Mundo";
	if(!checker(ft_printf(s1), printf(s1)))
		return 0;
	char *s1="Hola Mundo";
    if(!checker(ft_printf(s1), printf(s1)))
        return 0;
	return 0;
}
//---------CONTROL DE ERRORES---------------------
//Que pasa si meto printf("",s1,s2);	/Mas parametros
//Que pasa si meto printf("%s ",);		/Menos parametros
//Que pasa si meto printf("%s ",int1);  /Tipo diferente
//Que pasa si meto printf('\0');		/Caracter nulo
//Que pasa si meto printf("%i", 4+20);	/Integer desde suma
