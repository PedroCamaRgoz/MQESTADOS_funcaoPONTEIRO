#ifndef LIBRARY_SHELF_H
#define LIBRARY_SHELF_H

#include "dispLCD4vias.h"


struct
{
    void (* init)(void);
    void (* string)( const char * str );
    void (* str_position)( unsigned char lin, unsigned char col, const char * str );
    void (* number)(  unsigned char lin, unsigned char col, int num, unsigned char tam );
    void (* clr)( void );
    unsigned char (* B0)( void );
    unsigned char (* B1)( void );
    
} print = {LCD_init, LCD_str , LCD_Texto, LCD_num, dispLCD_clr, lcd_b0, lcd_b1};

#endif
