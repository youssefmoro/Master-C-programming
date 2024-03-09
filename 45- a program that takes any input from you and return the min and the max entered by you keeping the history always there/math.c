static int max;
static int min;

void take_n(int n)
{
    static int count=0;
    if(count==0)
    {
        max=n;
        min=n;
        count=1;
    }
    //(x>max)?(max=x):0;
    //(x<min)?(min=x):0;
    if(n>max)
    {
        max=n;
    }
    if(n<min)
    {
        min=n;
    }
}

int get_max(void)
{
    return max;
}
int get_min(void)
{
    return min;
}
