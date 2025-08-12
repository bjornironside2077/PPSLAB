10a) C program to demonstrate union of short int and two char.

PROGRAM:
##include <stdio.h>
#include<string.h>
union ShortCharUnion {
    short int short_val;
    char char_val[2];
};

 void main() {
    union ShortCharUnion var;
   
   // Assign a value to the short int member
    var.short_val = 555;
   // Print the values
      printf ("After short int value assignment:\n");
      printf("Short value: %d\n", var.short_val);
      printf("Char value : %s (Invalid value)\n", var.char_val);
     
   // Modify char array
   strcpy( var.char_val ,"AB");
   // Print the values again
      printf ("\nAfter two car values assignment:\n");
      printf("Short value: %d (Invalid value)\n", var.short_val);
      printf("Char value : %s\n", var.char_val);
}
