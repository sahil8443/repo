/* question : You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using all the elements from original.

The elements from indices 0 to n - 1 (inclusive) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form the second row of the constructed 2D array, and so on.

Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.*/
int** construct2DArray(int* original, int originalSize, int m, int n,
int* returnSize, int** returnColumnSizes)
{
    if (originalSize != m * n) {
        *returnSize = 0;
        return NULL;
    }
    int **arr=(int**)malloc(m*sizeof(int*));
    *returnColumnSizes=(int*)malloc(m*sizeof(int*));
    *returnSize=m;
    int ind=0;
    for(int i=0,ind=0;i<m;i++)
    {
        arr[i]=(int*)malloc(n*sizeof(int*));
        for(int j=0;j<n;j++)
        {
            arr[i][j]=original[ind++];
        }(*returnColumnSizes)[i]=n;
    }
    return arr;
}