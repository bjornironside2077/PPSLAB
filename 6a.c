6a C-Program to perform addition of two matrices. 
1.	#include <stdio.h>  
2.	int main() {  
3.	   int m, n, i, j;  
4.	   printf("Enter the number of rows and columns of the matrices: ");  
5.	   scanf("%d%d", &m, &n);  
6.	   int a[m][n], b[m][n], c[m][n];  
7.	   printf("Enter the elements of matrix A: \n");  
8.	   for (i = 0; i < m; i++) {  
9.	      for (j = 0; j < n; j++) {  
10.	         scanf("%d", &a[i][j]);  
11.	      }  
12.	   }  
13.	   printf("Enter the elements of matrix B: \n");  
14.	   for (i = 0; i < m; i++) {  
15.	      for (j = 0; j < n; j++) {  
16.	         scanf("%d", &b[i][j]);  
17.	      }  
18.	   }  
19.	   // add the matrices  
20.	   for (i = 0; i < m; i++) {  
21.	      for (j = 0; j < n; j++) {  
22.	         c[i][j] = a[i][j] + b[i][j];  
23.	      }  
24.	   }  
25.	   // print the result  
26.	   printf("The sum of the two matrices is: \n");  
27.	   for (i = 0; i < m; i++) {  
28.	      for (j = 0; j < n; j++) {  
29.	         printf("%d ", c[i][j]);  
30.	      }  
31.	      printf("\n");  
32.	   }  
33.	   return 0;  
34.	}  
