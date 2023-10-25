
int calculate(int x, int n, float sum)
{
    int i;
    float term=1;
   
    for(i=1;i<n;i++)
    {
        term=term*x/i;
        sum=sum+term;
    }
    return sum;
}
int main()
{
    int x=5;
    int n=10;

    float sum=1;
    float term=1;
    int temp;
    temp=term/sum;
    float result=calculate(x,n,sum);
    return 1;

}