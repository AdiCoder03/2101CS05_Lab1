#include<stdio.h>
#include<math.h>
typedef long long ll;

void Add()
{
  printf("Enter two space-separated numbers: ");
  double x, y, z;
  scanf("%lf%lf", &x, &y);
  z = x + y;
  printf("%lf + %lf = %lf\n", x, y, z);
  printf("\n Enter any character and press enter to continue...");
  char a;
  scanf("%s", &a);
}

void Subtract()
{
  printf("Enter two space-separated numbers: ");
  double x, y, z;
  scanf("%lf%lf", &x, &y);
  z = x - y;
  printf("%lf - %lf = %lf\n", x, y, z);
  printf("\n Enter any character and press enter to continue...");
  char a;
  scanf("%s", &a);
}

void Multiplication()
{
  printf("Enter two space-separated numbers: ");
  double x, y, z;
  scanf("%lf%lf", &x, &y);
  z = x * y;
  printf("%lf * %lf = %lf\n", x, y, z);
  printf("\n Enter any character and press enter to continue...");
  char a;
  scanf("%s", &a);
}

void Quotient()
{
  printf("Enter two space-separated integers: ");
  double x, y;
  long long z;
  scanf("%lf%lf", &x, &y);
  if(y == 0)
  {
    printf("Invalid operation. Division by zero is not defined.\n");
  }
  else
  {
    z = floor(x / y);
    printf("%lld \\ %lld = %lld\n", (ll)x, (ll)y, z);
  }
  printf("\n Enter any character and press enter to continue...");
  char a;
  scanf("%s", &a);
}

void Remainder()
{
  printf("Enter two space-separated integers: ");
  double x, y;
  long long z;
  scanf("%lf%lf", &x, &y);
  if(y == 0)
  {
    printf("Invalid operation. Division by zero is not defined.\n");
  }
  else
  {
    z = floor(x/y);
    z = x - y * z;
    printf("%lld MOD %lld = %lld\n", (ll)x, (ll)y, z);
  }
  printf("\n Enter any character and press enter to continue...");
  char a;
  scanf("%s", &a);
}

{
  printf("Enter two space-separated numbers: ");
  long long x, y, z;
  scanf("%ld%ld", &x, &y);
  z = x / y;
  printf("%ld * %ld = %ld\n", x, y, z);
  printf("\n Press enter to continue...");
  char a[10];
  scanf("%s", &a);
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
