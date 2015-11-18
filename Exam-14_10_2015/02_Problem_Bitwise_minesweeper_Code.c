#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMAND_SIZE 10

int get_bit(unsigned int num, int position);

void set_bit(unsigned int *num, int position, int bit);

int main()
{
    int n;
    scanf("%d", &n);
    
    unsigned int nums[n];
    int i;
	
    for (i = 0; i < n; i++)
    {
        scanf("%u", &nums[i]);
    }
    
	// skip next char
    getchar();
    
    char command[COMMAND_SIZE];
    fgets(command, COMMAND_SIZE, stdin);
    
	int pos = 0, row = 0;
	
    while (strcmp(command, "end\n") != 0)
    {
		//set null terminator if last byte is new line
        size_t len = strlen(command);
        if (command[len - 1] == '\n')
            command[len - 1] = '\0';
        
        int UpdatedPosCol = pos, UpdatedRow = row;
		
        if (strcmp(command, "right") == 0)
        {
			// update postion -> current col decrease
            UpdatedPosCol = pos - 1;
            if (UpdatedPosCol < 0)
            {
                UpdatedPosCol = 31;
            }
        }
        else if (strcmp(command, "left") == 0)
        {
			// update position -> current col insrease
            UpdatedPosCol = pos + 1;
            if (UpdatedPosCol >= 32)
            {
                UpdatedPosCol = 0;
            }
        }
        else if (strcmp(command, "up") == 0)
        {
			// update  position -> current row decrease
            UpdatedRow = row - 1;
            if (UpdatedRow < 0)
            {
                UpdatedRow = n - 1;
            }
        }
        else 
        {
			// update position -> current row increase
            UpdatedRow = row + 1;
            if (UpdatedRow >= n)
            {
                UpdatedRow = 0;
            }
        }
        
        int bit = get_bit(nums[UpdatedRow], UpdatedPosCol);
        if (bit == 1)
        {
            printf("GAME OVER. Stepped a mine at %d %d\n", UpdatedRow, UpdatedPosCol);
            break;
        }
        
        set_bit(&nums[row], pos, 0);
        set_bit(&nums[UpdatedRow], UpdatedPosCol, 1);
        row = UpdatedRow;
        pos = UpdatedPosCol;
        
		// update command line
        fgets(command, COMMAND_SIZE, stdin);
    }
    
	// print nums array
    for (i = 0; i < n; i++)
    {
        printf("%u\n", nums[i]);
    }
    
    return (EXIT_SUCCESS);
}
// get bit at current position
int get_bit(unsigned int num, int position) 
{
    return (num >> position) & 1;
}

void set_bit(unsigned int *num, int position, int bit)
{
	// set bit at potion to one no matter what is cuurent bit
    if (bit == 1) 
        *num |= 1U << position;
    //set bit at position to zero no matter what is current bit
	else 
        *num ^= 1U << position; 
}