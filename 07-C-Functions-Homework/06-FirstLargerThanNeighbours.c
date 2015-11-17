#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define length(array) (sizeof(array) / sizeof(array[0]))

/*
 * Write a method that returns the index of the first element in array 
 * that is larger than its neighbours, or -1 if there's no such element. 
 * Declare a function prototype before defining the function
 */

int is_larger_than_neighbours(int* numbers, int num, int length);

int get_index_of_first_element_larger_than_neighbours(int* sequence, 
                                                        int length);

int main() 
{
    int sequenceOne[] = { 1, 3, 4, 5, 1, 0, 5 };
    int sequenceTwo[] = { 1, 2, 3, 4, 5, 6, 6 };
    int sequenceThree[] = { 1, 1, 1 };
    int firstSeqLength = length(sequenceOne);
    int secondSeqLength = length(sequenceTwo);
    int thirdSeqLength = length(sequenceThree);
    
    
    printf("%d\n", 
            get_index_of_first_element_larger_than_neighbours(sequenceOne, 
                                                            firstSeqLength));
    printf("%d\n", 
            get_index_of_first_element_larger_than_neighbours(sequenceTwo, 
                                                            secondSeqLength));
    printf("%d\n", 
            get_index_of_first_element_larger_than_neighbours(sequenceThree,
                                                            thirdSeqLength));
    
    return 0;
}

int get_index_of_first_element_larger_than_neighbours(int* sequence, 
                                                        int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (is_larger_than_neighbours(sequence, i, length))
        {
            return i;
        }
    }
    
    return -1;
}

int is_larger_than_neighbours(int* numbers, int num, int length)
{
    int isLarger = 1;
    if (num == 0)
    {
        isLarger = numbers[num] > numbers[num + 1];
    }
    else if (num == length - 1)
    {
        isLarger = numbers[num] > numbers[num - 1];
    }
    else
    {
        isLarger = (numbers[num] > numbers[num - 1]) &&
                        numbers[num] > numbers[num + 1];
    }
    
    return isLarger;
}
