#include "../inc/libmx.h" 
void mx_printchar(char c){
const void *chr = &c;

write (1, chr, 1);

}
