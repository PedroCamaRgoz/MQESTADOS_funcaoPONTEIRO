/*
 * File:   main.c
 * Author: Pedro
 *
 * Created on 22 de Agosto de 2021, 18:44
// */

#include "config.h"
#include <xc.h>
#include "delay.h"
#include "library_shelf.h"
#include "keyboard.h"

// Programa teste para entender o funcionamento de um ponteiro para função 
// em uma maquina de estados.


void (*ponteiro)();
void estado_0 (void);
void estado_1 (void);
void estado_2 (void);
void estado_3 (void);

void estado_0(void)
{
    print.string("Aponta p/ estd 1");
    delay(500);
    ponteiro=estado_1;    
}

void estado_1 (void)
{
    print.string("Aponta p/ estd 2");
    delay(500);
    ponteiro=estado_2;
}
 
void estado_2 (void)
{
    print.string("Aponta p/ estd 3");
    delay(500);
    ponteiro=estado_3;  
}

void estado_3 (void)
{
    print.string("Aponta p/ estd 0");
    delay(500);
    ponteiro=estado_0;   
}


void main (void)
{
    print.init();
    
    ponteiro=estado_0; // ponteiro -> estado_0, inicial.
    
    while(1)
        (*ponteiro)();  // função em loop

    
}