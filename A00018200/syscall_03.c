#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main(){
const char*mensaje="Escribiendo en el archivo";
const char*mr= "se presento un error al escribir";
int filedesc=open("prueba.txt",O_WRONLY | O_APPEND);
if(filedesc<0)
return 1;

if (write(filedesc,mensaje,strlen(mensaje))!=strlen(mensaje))
{write(2,mr,strlen(mr));
return 1;
}
return 0;
}
