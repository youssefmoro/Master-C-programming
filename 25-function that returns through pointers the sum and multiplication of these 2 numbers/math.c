void mul_add (int*px,int*py)
{
    unsigned int temp=*px;
    *px=*px+*py;
    *py=temp * (*py);

}
