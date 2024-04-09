#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>



void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}




int main(){
    int n;
    printf("Enter the number of light and dark balls(both are same): ");
    scanf("%d",&n);
    printf("\n");
    int m=0;
    char disk[2*n];
    for(int i=0;i<n;i++){
        disk[2 * i] = 'd';
        disk[2 * i + 1] = 'l';
    }


    printf("Initial load of cards:-\n");
    for(int i=0;i<2*n;i++){
        printf("%c",disk[i]);
    }

    //swapping these balls as par light and dark

    // outer loop will keep running the inner loop till the if condition is not further satisifed
for (int i = 0; i < n; i++) {
    for(int j=0;j<2*n;j++){
        if (disk[j] == 'd' && disk[j+ 1] == 'l') {
					swap(&disk[j], &disk[j+ 1]);
                    m++;
				}
    }
}


     printf("\n After shiffling the cards \n");
    for(int i=0;i<2*n;i++){
        printf("%c",disk[i]);
    }


    printf("\nNumber of moves=%d",m);
    return 0;
}

