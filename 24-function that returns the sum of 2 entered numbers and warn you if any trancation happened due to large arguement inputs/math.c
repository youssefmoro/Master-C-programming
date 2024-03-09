
unsigned char add(unsigned char n1,unsigned char n2,unsigned char*px)
{

    if (((n1/2)+(n2/2))>127)
    {
        return 0;
    }
    else
    {
        *px=n1+n2;
        return 1;
    }
}
