//Recursive calls and if else statements

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }

    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n=5;
    int result=fibo(n);
    if(result == 5)
    {
        if(n>5)
        {
            return result+result;
        }
        else{
            return result;
        }
    }
    return 0;
}
