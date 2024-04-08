#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


int main(){
    int n ;
    
    
    
    int count1,count2;
    int p1;
    int flag=0;
    char a[n][n];
    char rowstore[n][n];
    char colstore[n][n];
    char diagstore[n][n];
    int p;
    int len;
    char word_check[len];
    printf("Enter the  size of the crossword");
    scanf("%d",&n);
    printf("Enter the crossword\n");

    for(int i=0;i<n;i++){
        for( int j=0;j<n;j++){
            scanf("%c",&a[i][j]);
        }
    }

 
    printf("Enter the length of the word to be searched\n");
    scanf("%d",&len);

    
    printf("Enter the word to be checked");
    for(int i=0;i<len;i++){
       scanf("%c",&word_check[i]);
    }

   
    




    

    //Now according to this approach we are going to make strings of each row and each column


    //each row
    for(int i=0;i<n;i++){
            for( int j=0;j<n;j++){
                rowstore[i][j]=a[i][j];
            }
    }

    //each column
   
    for(int i=0;i<n;i++){
        for( int j=0;j<n;j++){
            colstore[i][j]=a[j][i];
        }
    }



    //each diagonal
    //around the diagonal we can check elements from the same row or the same column


    //along the diagonal 
     count1=0;
     count2=0;


     for(int i=0;i<n;i++){
        for( int  j=0;j<n;j++){
           while(count1<n && count2<n){
        diagstore[i][j]=a[count1][count2];
        count1++;
        count2++;
    }
        }
     }


     // along the row diagonally
        count1=0;
        count2=1;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
               while(count1<n && count2<n){
                    diagstore[i][j]=a[count1][count2];
                    count1++;
                    count2++;
    }
            }
        }
      
    // along the column diagonally 

       count1=1;
       count2=0;
       for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            while(count1<n && count2<n){
        diagstore[i][j]=a[count1][count2];
        count1++;
        count2++;
    }
        }
       }




     
       printf("All possible row strings are\n");
       for(int i=0;i<n;i++){
        printf("%s\n",rowstore[i]);
       }

       printf("\nAll possible columns strings are\n");
       for(int i=0;i<n;i++){
        printf("%s\n",colstore[i]);
       }
       


       printf("\nAll possible diagonals strings are\n");
       for(int i=0;i<n;i++){
        printf("%s\n",diagstore[i]);
       }



       //Now checking through each 2 dimensional character matrix



       //rowstore
       for(int i=0;i<n;i++){
           
           p = strcspn(rowstore[i], word_check);
           strrev(rowstore[i]);
           p1=strcspn(rowstore[i],word_check);
           if(p!=-1  && p1!=-1){
                 flag=1;
                 break;
           }
       }



       //colstore
       
       for(int i=0;i<n;i++){
         
           p = strcspn(colstore[i], word_check);
           strrev(colstore[i]);
           p1=strcspn(colstore[i],word_check);
           if(p!=-1 && p1!=-1){
                 flag=1;
                 break;
           }
       }



        //diagstore
        for(int i=0;i<n;i++){
          
           p = strcspn(diagstore[i], word_check);
           strrev(diagstore[i]);
           p1= strcspn(diagstore[i],word_check);
           if(p!=-1  && p1!=-1){
                 flag=1;
                 break;
           }
       }


       if(flag==1){
          printf("The string %s has been found",word_check);
       }
      else{
           printf("The puzzle does not contain the word %s",word_check);
      }
    
    return 0;
}


/*
void diagcharadd(char diagstore[][],char a[][],int n,int count1,int count2,int i,int j){
    
    
}
*/