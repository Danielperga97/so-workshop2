**SO-WORKSHOP 2**

**Nombre:** Daniel Perez Garcia
**Codigo**: A00018200

**LLamadas al sistema**

1. **gettimeofday**: Esta llamada al sistema retorna la hora que contiene el sistema, ademas de la zona horaria en la que se encuentra.

Uso:
  #include <sys/time.h>
       int gettimeofday(struct timeval *tv, struct timezone *tz);
       
Parametros:
tv:
     struct timeval {
               time_t      tv_sec;     /* seconds */
               suseconds_t tv_usec;    /* microseconds */
           };
          
tz: su uso esta depreciado por lo que suele ponerse NULL.
Retorna -1 si existe algún error.


2. **Reboot** :Esta llamada reinicia o paga el sistema, dependiendo de los calores que se ingresen por parametro-

Uso:
 #include <unistd.h>
       #include <sys/reboot.h>

       int reboot(int cmd);
       
Posibles parametros:
 LINUX_REBOOT_CMD_RESTART, LINUX_REBOOT_CMD_RESTART2:ell proceso init() es terminado y El sistema se reinicia.
  LINUX_REBOOT_CMD_POWER_OFF, LINUX_REBOOT_CMD_HALT: El proceso init() es terminado y el sistema se apaga.
  
  +Retorna -1 si existe algún error.

3. **Función open** ;La función open abre un archivo  existente, sino existe lo crea.
uso:
open ( char name, int create, int permiso )  
Parametros:
 parámetro name es la cadena de como se llamara el archivo 
 parámetro create establece la creación del archivo si no existe.  
 
Retorna -1 si existe algún error.
 
