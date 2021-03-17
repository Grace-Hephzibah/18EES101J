#include<stdio.h>

void fibonacci(int n)
{
    int a = -1;
    int b = 1;
    int c;

    for(int i=0; i<=n;i++)
    {
      c = a+b;
      a = b;
      b = c;

      printf("Value number %d: %d\n",i, c);
    }

}

int main()
{
    
  int no;

  scanf("%d", &no);

  fibonacci(no);
}
