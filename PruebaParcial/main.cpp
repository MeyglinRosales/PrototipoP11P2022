# incluir  <iostream>

principal ()
{
int m1[3][3] = {{ 1 , 1 , 1 }, { 2 , 2 , 2 }, { 3 , 3 , 3 }};
int m2 [3][3];
int x, y;
for(x= 0 ; x < 3; x++)
for(y= 0 ; y < 3; y++)
if (m1[x][y]% 2 == 0 )
    {
        m2[x][y] = 0 ;
    }
    else
    if(m2[x][y] = 1)
        {
            printl ( " %d , %d , %d " , m2[ 0 ][ 0 ], m2[ 1 ][ 1 ], m2[ 2 ][ 2 ]);
        }
}
