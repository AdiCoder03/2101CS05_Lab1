#include<stdio.h>

void Add()
{
  printf("Enter two space-separated numbers: ");
  double x, y, z;
  scanf("%lf%lf", &x, &y);
  z = x + y;
  printf("%lf + %lf = %lf", x, y, z);
}

int main()
{
  int ch = 1;
  while(ch > 0 && ch < 7)
  {
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Quotient of integer division\n5. Remainder of integer division\n6. Floating point division");
    printf("\nEnter any other number to exit.\nEnter your choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
      case 1: Add();
      break;
      case 2: Subtract();
      break;
      case 3: Multiplication();
      break;
      case 4: Quotient();
      break;
      case 5: Remainder();
      break;
      case 6: Divide();
      break;
    }
  }
  return 0;
}
