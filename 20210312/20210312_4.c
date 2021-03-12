/*Алгоритъмът на Флойд-Уоршал се използва за намиране на най-къс път, както в ориентиран така и в
неориентиран граф, от всеки връх до който и да е друг връх. Работи коректно както с положителни, така и с
отрицателни тегла на дъгите (ребрата). Алгоритъмът извежда минималните дължини на всяка двойка върхове на
графа.
Приемаме,че имаме претеглен граф G=(V,E) V - брой върхове, Е – брой ребра от тип.
За съхранение на стойностите се използва квадратна матрица на съседство а[N][N]. Ако съществува връзка
(ребро), се пише теглото на връзката (разстоянието). Например връзка 1-->2=7 (първи ред, втора колона), 1-->3=9,
1-->6=14, 2-->1=7 (втори ред, първа колона). Ако не съществува ребро, се присвоява максимално допустимата
стойност за с++ (INT_MAX) или стойност по-голяма от максималното разстояние в матрицата(за примера
използвам INF=9999). На главния диагонал се присвояват стойности 0, защото разстоянието от т.1 до т.1, от т. 2
до т.2 е равно на 0.
*/
#include <stdio.h>
#define N 6
#define INF 9999
int main()
{
    int i, j, k;
    int A[N][N] = {
        {0, 7, 9, INF, INF, 14},
        {7, 0, 10, 15, INF, INF},
        {9, 10, 0, 11, INF, 2},
        {INF, 15, 11, 0, 6, INF},
        {INF, INF, INF, 6, 0, 9},
        {14, INF, 2, INF, 9, 0}};
    for (k = 0; k < N; k++)
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                if (A[i][k] + A[k][j] < A[i][j])
                {
                    A[i][j] = A[i][k] + A[k][j];
                    printf("A[%d][%d] = A[%d][%d] + A[%d][%d] = %d\n", i, j, i, k, k, j, A[i][j]);
                }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}