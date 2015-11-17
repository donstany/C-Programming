#include <stdio.h>
#include <stdlib.h>

void fill_array(unsigned char *arr, int length);

int main()
{
    int n, step;
    if (scanf("%d %d", &n, &step) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    
    unsigned char numbers[n];
    fill_array(numbers, n);
    int i, pos = 0;
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 7; j >= 0; j--)
        {
            if ((pos % step == 1) || (step == 1 && pos > 0))
            {
                numbers[i] |= 1 << j;
            }
            
            pos++;
        }
        
        printf("%u\n", numbers[i]);
    }

    return 0;
}

void fill_array(unsigned char *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        scanf("%hhu", &arr[i]);
    }
    
}