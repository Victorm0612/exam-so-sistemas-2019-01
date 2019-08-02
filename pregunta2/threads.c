#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

//89.2857142857
volatile float v;
puerta door;
void *worker1(){
        float y=350;
        float z=25;
        float x=1250;
        cerrar_puerta(door);
        sleep(2);
	v=z/y;
	abrir_puerta(door);
        v=v*x;
}

int main(int argc, char *argv[]) {
    crear_puerta(door);
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, worker1, NULL); 
    Pthread_create(&p2, NULL, worker1, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("Final value   : %f\n", v);
    destruir_puerta(door);
    return 0;
}
