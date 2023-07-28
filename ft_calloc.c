#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*int main(void)
{
    size_t size = 5;
    int *ptr = (int *)calloc(size, sizeof(int));
    int *ptr2 = (int *)ft_calloc(size, sizeof(int));

    if (ptr != NULL && ptr2 != NULL){
        printf("Memmory allocated\n");
        printf("The calloc allocated array is   :\n");
        for (int i = 0; i < size; i++){
            printf("%d ", ptr[i]);
        }
        printf("\nThe ft_calloc allocated array is:\n");
        for (int i = 0; i < size; i++){
            printf("%d ", ptr2[i]);
        }
    }
    else{
        printf("Memmory not allocated\n");
    }
}*/