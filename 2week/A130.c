#include <stdio.h>
#define SIZE 10000001

int main()
{
  int K, N, sum = 0; // 줄 개수, 배열 크기 인덱스 값, 저장된 배열 값들의 합
  int N1[SIZE];      // 정수를 저장할 배열
  int N2[SIZE];      // 새로운 정수를 저장할 배열

  scanf("%d", &K);

  for (int i = 0; i < K; i++)
  {
    scanf("%d", &N1[i]);
  }

  for (int j = 0; j < K; j++)
  {
    if (N1[j] != 0)
    {
      N2[N] = N1[j];
      N++;
    }
    else
    {
      N2[N - 1] = 0;
      N--;
    }
  }

  for (int k = 0; k <= N; k++)
  {
    sum += N2[k];
  }

  printf("%d\n", sum);

  return 0;
}