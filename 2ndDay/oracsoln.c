
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>







int main(){
     int n,res=0,k;
     scanf("%d",&n);
     scanf("%d",&k);
     //k>=1

     if(n%2==0){
         res=n+2*k;
     }


     else{
          
          for(int i=3;i<=n;i++){
        if((n)%i==0){
          n+=i;
          k--;
          break;
        }
    }
          //printf("%d",k);
          res=n+2*k;
     }


    printf("Final res=%d",res);

     return 0;

}