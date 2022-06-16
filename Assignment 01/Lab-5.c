#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100],i,n,key;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the item: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("Item is found ");
            return 0;
        }

    }

	printf("Item not  found");
}
