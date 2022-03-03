# incluir  <iostream>

principal ()
{
int m1[3][3] = {{ 1 , 1 , 1 }, { 2 , 2 , 2 }, { 3 , 3 , 3 }};
intm2 [3][3];
entero x, y;
para (x= 0 ; x < 3; x++)
para (y= 0 ; y < 3; y++)
si (m1[x][y]% 2 == 0 )
m2[x][y] = 0 ;
demás
m2[x][y] = 1 ;
printf ( " %d , %d , %d " , m2[ 0 ][ 0 ], m2[ 1 ][ 1 ], m2[ 2 ][ 2 ]);
}
