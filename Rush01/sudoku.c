#include  <stdio.h>

#define TAMAÑO 9

// sudoku problem 
int  matriz [ 9 ] [ 9 ]  =  { 
    { 6 , 5 , 0 , 8 , 7 , 3 , 0 , 9 , 0 }, 
    { 0 , 0 , 3 , 2 , 5 , 0 , 0 , 0 , 8 }, 
    { 9 , 8 , 0 , 1 , 0 ,4 , 3 , 5 , 7 }, 
    { 1 , 0 , 5 , 0 , 0 , 0 , 0 , 0 , 0 }, 
    { 4 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 2 }, 
    { 0 , 0 , 0 , 0 , 0 , 0 , 5 ,0 , 3 }, 
    { 5 , 7 , 8 , 3 , 0 , 1 , 0 , 2 , 6 }, 
    { 2 , 0 , 0 , 0 , 4 , 8 , 9 , 0 , 0 }, 
    { 0 , 9 , 0 , 6 , 2 , 5 , 0 , 8 , 1 }
};

// función para imprimir sudoku 
void  print_sudoku () 
{ 
    int  i , j ; 
    for ( i = 0 ; i < TAMAÑO ; i ++ ) 
    { 
        for ( j = 0 ; j < TAMAÑO ; j ++ ) 
        { 
            printf ( "%d \t " , matriz [ i ] [ j ]); 
        } 
        printf ( "\n \n" ); 
    } 
}

// función para verificar si todas las celdas están asignadas o no 
// si hay alguna celda no asignada 
// entonces esta función cambiará los valores de 
// row y col en consecuencia 
int  number_unassigned ( int  * row ,  int  * col ) 
{ 
    int  num_unassign  =  0 ; 
    int  i , j ; 
    for ( i = 0 ; i < TAMAÑO ; i ++ ) 
    { 
        for ( j = 0 ; j< TAMAÑO ; j ++ ) 
        { 
            // la celda no está asignada 
            if ( matriz [ i ] [ j ]  ==  0 ) 
            { 
                // cambiando los valores de row y col 
                * row  =  i ; 
                * col  =  j ; 
                // hay una o más celdas sin asignar 
                num_unassign  =  1 ; 
                return  num_unassign ; 
            } 
        } 
    } 
    return  num_unassign ; 
}

// función para verificar si podemos poner un 
// valor en una celda en particular o no 
int  is_safe ( int  n ,  int  r ,  int  c ) 
{ 
    int  i , j ; 
    // revisando en la fila 
    for ( i = 0 ; i < TAMAÑO ; i ++ ) 
    { 
        // hay una celda con mismo valor 
        if ( matriz [ r ] [ i ]  ==  n ) 
            return 0 ;
    } 
    // comprobando la columna 
    for ( i = 0 ; i < TAMAÑO ; i ++ ) 
    { 
        // hay una celda con el valor igual a i 
        if ( matriz [ i ] [ c ]  ==  n ) 
            return  0 ; 
    } 
    // comprobación de  submatriz 
	 int  row_start  =  ( r / 3 ) * 3 ; 
    int  col_start  =  ( c / 3 ) *3 ; 
    for ( i = row_start ; i < row_start + 3 ; i ++ ) 
    { 
        for ( j = col_start ; j < col_start + 3 ; j ++ ) 
        { 
            if ( matriz [ i ] [ j ] == n ) 
                return  0 ; 
        } 
    } 
    return  1 ; 
}

// función para resolver sudoku 
// usando backtracking 
int  solve_sudoku () 
{ 
    int  row ; 
    int  col ; 
    // si todas las celdas están asignadas, el sudoku ya está resuelto 
    // pasar por referencia porque number_unassigned cambiará los valores de row y col 
    if ( number_unassigned ( & row ,  & col )  ==  0 ) 
        return  1 ; 
    int  n , i ; 
    // número entre 1 y 9 
    para ( i = 1 ;i <= TAMAÑO ; i ++ ) 
    { 
        // si podemos asignar i a la celda o no 
        // la celda es matriz [fila] [col] 
        if ( es_seguro ( i ,  fila ,  col )) 
        { 
            matriz [ fila ] [ col ]  =  i ; 
            // retroceso 
            if ( solve_sudoku ()) 
                return  1 ; 
            // si no podemos proceder con esta solución 
            // reasignar la 
            matriz de celda [ fila ] [ col ] =0 ; 
        } 
    } 
    devuelve  0 ; 
}

int  main () 
{ 
    if  ( solve_sudoku ()) 
        print_sudoku (); 
    else 
        printf ( "Sin solución \ n " ); 
    return  0 ; 
}