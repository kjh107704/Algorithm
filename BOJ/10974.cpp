#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    vector<int> perm(N);
    for(int i = 0; i < N; i++)
        perm[i] = i+1;

    do
    {
        for(int i = 0; i < N; i++)
            printf("%d ",perm[i]);
        printf("\n");
    } while (next_permutation(perm.begin(), perm.end()));
    
}