//Nested loop and multi-dimension aray
int main()
{
    int i,j;
    int arr[6][6];

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            arr[i][j] = i+j;
        }
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<i;j++)
        {
            arr[i][j] = arr[j][i];
        }
    }

    return 0;
    
}