#include <stdio.h>
#include <stdlib.h>

void bubble(int arr[], size_t size)
{
	int j = 0;
	int temp;
	int swap = 1;
	int n = size - 1;
    
    do {
    swap=0;
        for(j=0;j<n;++j){
            if(arr[j + 1] < arr[j])
            {
              	swap= 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;  
            }
        
        }
        --n;
    }while (swap);


}

int main(void)
{
	int a[] = {58,89,71,35,6};

bubble(a, sizeof a / sizeof (int));

	unsigned m = 0;
	for(; m < (sizeof a / sizeof (int)); ++m)
		{
			printf("%d\n", a[m]);
		}
		
	exit(0);
}
