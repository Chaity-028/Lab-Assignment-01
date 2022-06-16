#include <stdio.h>
int main()
{
   int array[50], position, c, n;

   printf("Enter number of elements of the list:\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Updated list:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);

   return 0;
}
