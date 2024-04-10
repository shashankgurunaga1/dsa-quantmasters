## HERE'S  THE  QUESTION


##  <u>***FIND THE PIVOT INTEGER USING  AMONG N  NATURAL NUMBERS `O(1)` time complexity***</u>

`WHAT IS  PIVOT INTEGER?`
>A pivot integer is a particular number in a sorted sequence such that the sum of numbers before it is equal to the sum of numbers after it.
 
 In a given set of natural numbers an equilibrium point x can be obtained as:-
 ```Considerring x to be the pivot integer,
1+2+3+.....+x-1=(x+1)+(x+2)+....+n

(x*(x-1))/2=((n*(n+1))/2)-((x*(x+1))/2)


```
### Upon solving the above equation we obtain the value of x which is the pivot integer.

>We then obtain the value of equilibrium point  `x=sqrt(n*(n+1)/2)`

# ALGORITHM:

```C
#include<stdio.h>
#include<math.h>


int main(){
    //Enter the number of natural numbers
     int n;
     printf("Enter the value of n");
     scanf("%d",&n);
     if(n==1){
       printf("1");
      }
    else{
     int nsum=(n*(n+1))/2;
     int piv=sqrt(nsum);
     printf("Pivot integer=%d",piv);

    }
     return 0;
    
}
```

