#include <stdio.h>

int main ( void ) {
    
    int number[100] = {} ; 
    int amount = 0 ; 
    for ( amount = 0 ; amount < 100 ; amount += 1 ) {
        int test = scanf ( "%d" , &number[amount] ) ; 
        if ( test == EOF ) {
            break ;
        } 
    } 
    
    // 進行反轉
    int seat = amount - 1 ;  
    int element = 0 ;  
    for ( element = 0 ; element < seat ; element += 1 ) {
    
        int test = number[element] ;
        number[element] = number[seat] ;
        number[seat] = test ;
        
        seat -= 1 ; // 下一個位置 
    } 
    
    
    for ( element = 0 ; element < amount - 1 ; element += 1 ) {
        printf ( "%d " , number[element] ) ;
    } 
    printf ( "%d\n" , number[ amount - 1 ] ) ;
    
    return 0 ;
    
} 