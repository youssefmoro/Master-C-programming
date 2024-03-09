#include <stdio.h>
#include <stdlib.h>
void star_set(char array[][30],int row,int col,int x,int y)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            if ((i>x)&&(j==y))
            {
                array[i][j]='^';
            }
            else if((i<x)&&(j==y))
            {
                array[i][j]='v';
            }
            else if((i==x)&&(j<y))
            {
                array[i][j]='>';
            }
            else if((i==x)&&(j>y))
            {
                array[i][j]='<';
            }
            else if((i<x)&&(j<y))
            {
                array[i][j]='\\';
            }
            else if((i<x)&&(j>y))
            {
                array[i][j]='%';
            }
            else if((i>x)&&(j<y))
            {
                array[i][j]='/';
            }
            else
            {
                array[i][j]='+';
            }

        }
    }
    array[x][y]='*';

}

void star_print(char array[][30],int row,int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c ",array[i][j]);
        }
        printf("\n");
    }
    printf(".....................................");
}
int find_star(char array[][30],int row,int col,int* px,int* py)
{
    int i,j,loops=0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            loops++;
            if(array[i][j]=='*')
            {
                printf("loops used=%d\n",loops);
                *px=i;
                *py=j;
                return 1;
            }

        }
    }
    return 0;
}
int find_star_binary(char array[][30],int row,int col,int* px,int* py)
{
    int frow=0,lrow=row-1,fcol=0,lcol=col-1;
    int medrow,medcol,loop_n=0;
    while (frow<=lrow||fcol<=lcol)
    {
        loop_n++;
        medrow=((frow+lrow)/2);
        medcol=((fcol+lcol)/2);
        if(array[medrow][medcol]=='*')
        {
            printf("loops used=%d\n",loop_n);
            *px=medrow;
            *py=medcol;
            return 1;
        }
        else if(array[medrow][medcol]=='\\')
        {
            frow=medrow+1;
            fcol=medcol+1;
        }
        else if(array[medrow][medcol]=='/')
        {
            lrow=medrow-1;
            fcol=medcol+1;
        }
        else if (array[medrow][medcol]=='+')
        {
            lrow=medrow-1;
            lcol=medcol-1;
        }
        else if (array[medrow][medcol]=='%')
        {
            frow=medrow+1;
            lcol=medcol-1;
        }
        else if (array[medrow][medcol]=='>')
        {
            fcol=medcol+1;
        }
        else if (array[medrow][medcol]=='<')
        {
            lcol=medcol-1;
        }
        else if (array[medrow][medcol]=='v')
        {
           frow=medrow+1;
        }
         else if (array[medrow][medcol]=='^')
        {
           lrow=medrow-1;
        }


    }
    return 0;
}
int main()
{
    while(1)
    {
        char array[30][30];
        int x,y;
        printf("enter where you want to print the star\n");
        scanf("%d%d",&x,&y);
        star_set(array,30,30,x,y);
        star_print(array,30,30);
        int ppx=0,ppy=0;
         int ppx1=0,ppy1=0;
        int star=find_star(array,30,30,&ppx,&ppy);
        if(star==1)
        {
            printf("found at x=%d and y=%d ",ppx,ppy);
        }
        else
        {
            printf("not found");
        }
            int findstar=find_star_binary(array,30,30,&ppx1,&ppy1);
     if(findstar==1)
        {
            printf("found at x=%d and y=%d ",ppx1,ppy1);
        }
        else
        {
            printf("not found");
        }
    }

    return 0;
}

