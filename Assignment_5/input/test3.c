//Nested loop and multi-dimension aray


int count_components(int graph[][6])
{
    int n=sizeof(graph)/sizeof(graph[0]);
    int visited[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            count++;
            visited[i]=1;
            for(j=0;j<n;j++)
            {
                if(graph[i][j]==1)
                {
                    visited[j]=1;
                }
            }
        }
    }
    return count;
}

int main()
{

    int graph[6][6];
    int i,j;
    int n=6;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            graph[i][j]=0;
        }
    }
    graph[0][1]=1;
    graph[1][0]=1;
    graph[1][2]=1;
    graph[2][1]=1;
    graph[3][4]=1;
    graph[4][3]=1;
    graph[4][5]=1;
    graph[5][4]=1;

    int count=count_components(graph);
    return 0;
}
