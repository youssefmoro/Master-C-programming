
int swap (int *n11, int *n22)
{
    *n11=*n11+*n22;
    *n22=*n11-*n22;
    *n11=*n11-*n22;
    printf("f: %d %d\n",*n11,*n22);
}
