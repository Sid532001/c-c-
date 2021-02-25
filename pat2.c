#include<stdio.h>
void rectangle(int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("*");

        }
        printf("\n");
    }

}




int main(int argc, char const *argv[])
{
    int rows,columns;
    printf("enter the no of rows");
    scanf("%d",&rows);
    printf("enter the no of columns");
    scanf("%d",&columns);
    printf("\n");
    rectangle(rows,columns);
    /* code */
    return 0;
}
