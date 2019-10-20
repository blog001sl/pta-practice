#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

void sortElement(ElementType A[], int from, int to, ElementType tmp[])
{
    int N = to - from + 1;
    int mid = from + (N - 1) / 2;
    if (1 == N)
    {
        tmp[0] = A[from];
        return;
    }

    ElementType sortA[mid - from + 1];
    ElementType sortB[to - mid];
    sortElement(A, from, mid, sortA);
    sortElement(A, mid + 1, to, sortB);

    int x = 0;
    int y = 0;
    for (int i = 0; i < N; i++)
    {
        if (x < mid - from + 1)
        {
            if (y < to - mid)
            {
                if (sortA[x] > sortB[y])
                {
                    tmp[i] = sortB[y++];
                }
                else
                {
                    tmp[i] = sortA[x++];
                }
            }
            else
            {
                tmp[i] = sortA[x++];
            }
        }
        else
        {
            tmp[i] = sortB[y++];
        }
    }

    // for(int i=0;i<N;i++){
    //     printf("%f,", tmp[i]);
    // }
    // printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}

ElementType Median(ElementType A[], int N)
{
    ElementType sort[N];
    sortElement(A, 0, N - 1, sort);
    return sort[N / 2];

}