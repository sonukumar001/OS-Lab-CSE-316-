// WAP to display multiplication of numbers using threads.
// Done by Sonu Kumar K18MS B68 11815568

# include <stdio.h>
# include <pthread.h>
int global[2];

void *mult_thread(void *arg)
{
    int *args_array;
    args_array = arg;

    int n1,n2,mult;
    n1=args_array[0];
    n2=args_array[1];
    mult = n1*n2;

    printf("\n Number1 * Number2 = %d\n",mult);
    return NULL;
}

int main() 
{
    printf("\n \n Enter First number: ");
    scanf("%d",&global[0]);
    printf("\n Enter Second number: ");
    scanf("%d",&global[1]);

    pthread_t tid_mult;
pthread_create(&tid_mult,NULL,mult_thread,global);
    pthread_join(tid_mult,NULL);

    return 0;
}
