#include <stdio.h>
#include <stdlib.h>
int sudoko_game_take_number(int array[9][9],int x,int y,int num)
{
    int i,j;
    if (array[x][y]!=0)
    {
        printf("invalid place\n");
        return 0;
    }
    if(num>9||num<=0)
    {
        printf("invalid number\n");
        return 0;
    }
    for(i=0; i<9; i++)
    {
        if(array[x][i]==num)
        {
            printf("invalid number .. entered before in row\n");
            return 0;
        }
    }
    for(j=0; j<9; j++)
    {
        if(array[j][y]==num)
        {
            printf("invalid number .. entered before in col\n");
            return 0;
        }
    }
    array[x][y]=num;
    return 1;

}
int sudoko_check_finished_or_not(int array[9][9])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(array[i][j]==0)
            {
                return 0;
            }
        }
    }
    printf("game over!\n");
    return 1;
}

void game_print(int array[9][9])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(array[i][j]==0)
            {
                printf("    ");
            }
            else
            {
                printf("%d   ",array[i][j]);
            }
        }
        printf("\n");
    }
    printf(".....................................\n");
}
int main()
{
    while(1)
    {
        int array[9][9]= {0},x=0,y=0,number=0;
        array[0][2]=3,array[0][5]=2,array[0][6]=6,array[0][7]=1,array[0][8]=4;
        array[1][2]=2,array[1][3]=6,array[1][4]=4,array[1][5]=1,array[1][8]=8;
        array[2][1]=1,array[2][2]=6,array[2][4]=3,array[2][5]=5,array[2][7]=7;
        array[3][3]=3,array[3][7]=9,array[3][8]=7;
        array[4][0]=6,array[4][1]=5,array[4][5]=7,array[4][7]=3,array[4][8]=1;
        array[5][1]=3,array[5][2]=7,array[5][4]=5,array[5][5]=4;
        array[6][1]=7,array[6][2]=9,array[6][5]=6,array[6][6]=2;
        array[7][3]=5,array[7][4]=8,array[7][5]=3,array[7][6]=7;
        array[8][0]=8,array[8][1]=4,array[8][4]=2,array[8][7]=6;
        while(!sudoko_check_finished_or_not(array))
        {
            game_print(array);
            scanf("%d%d%d",&x,&y,&number);
            sudoko_game_take_number(array,x,y,number);
        }
    }

    return 0;
}
