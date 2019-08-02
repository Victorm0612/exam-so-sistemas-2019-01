# EXAMEN SISTEMAS OPERATIVOS 2019

### Pregunta 1:

En el escenario uno, ejecutandolo con argumento de entrada 1000, tenemos

Segunda prueba: 0.179 mls
Tercera prueba: 0.178 mls
Quinta  prueba: 0.18  mls

´´´
gcc -pthread threads_escenario1.c -o threads_escenario1 && ./threads_escenario1 1000

´´´

En el escenario dos, ejecutandolo con argumento de entrada 1000, tenemos:

Segunda prueba: 0.31  mls
Cuarta  prueba: 0.297 mls
Quinta  prueba: 0.326 mls

´´´
gcc -pthread threads_escenario2.c -o threads_escenario2 && ./threads_escenario2 1000

´´´


Finalmente, los tiempos observados en ambos escenarios pueden deberse al echo de que el programa tiene que 
cerrar o abrir la puerta. Cuando el programa abre y cierra la puerta una sola vez, como en el escenario uno, requiere un tiempo total menor al escenario dos, que abre y cierra la puerta cada vez que se itera, lo cual es un desgaste computacional.


### Pregunta 2:

´´´
gcc threads.c -pthread -o threads && ./threads

´´´

### Pregunta 3:

´´´
gcc env.c -o env && ./env

´´´
