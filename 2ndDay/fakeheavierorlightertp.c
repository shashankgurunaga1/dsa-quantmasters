#include<stdio.h>
#include<stdbool.h>

int main(){

    int n;
    int a[n];
    int with_fake_sum=0;
    int max1=0;
    

    printf("Enter the number of objects");
    scanf("%d",&n);


    //enter the objects's weights
    int l;
    int flag=0;
    int r;
    int left=1;
    int right=n-1;
    printf("Enter the first coin");
    scanf("%d",&a[0]);
    int key=a[0];
    int min1=0;
                           /*    5 8 8 8 8 8 8 8
                                
                                 8 5 8 8 8 8 8 8
                                 8 8 8 8 8 8 8 5
                           */
    while(left<=right){
        //Debugging
        printf("Inside....");
        printf("Enter the current left %d coin",left);
        scanf("%d",&a[left]);
        if(left==right){
            break;
        }
        printf("Enter the current right %d coin",right);
        scanf("%d",&a[right]);
        if(a[left]==a[right]){
            printf("The key element going to be",a[left]);
            
        }
        if(a[left]!=a[right]){

             l=a[left];
            r=a[right];
            flag=1;
             break;

        }
        
        left++;
        right--;
    }



   
if(flag==1){

    if((r>l) && l==key){
                        printf("The fake element %d is heavier ",r);
                      
            }
    if((r<l) && l==key){
            printf("The fake element %d is lighter",r);
            
}

    if((r>l) && r==key){
                printf("The fake element %d is lighter ",l);
                
    }


    if((r<l) && r==key){
                printf("The fake element %d is heavier ",l);
                
    }
}


if(flag==0){
    if(key<a[n-1]){
       printf("The fake element %d is lighter",key);
    }
    else if(key>a[n-1]){
         printf("The fake element %d is higher",key);
    }
}

    return 0;
}