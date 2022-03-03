# incluir  < stdio.h >
# definir  N  3
principal ()
{
int m1[N][N] = {{ 1 , 1 , 1 }, { 2 , 2 , 2 }, { 3 , 3 , 3 }};
intm2 [N][N];
entero x, y;
para (x= 0 ; x < N; x++)
para (y= 0 ; y < N; y++)
si (m1[x][y]% 2 == 0 )
m2[x][y] = 0 ;
demás
m2[x][y] = 1 ;
printf ( " %d , %d , %d " , m2[ 0 ][ 0 ], m2[ 1 ][ 1 ], m2[ 2 ][ 2 ]);
}
