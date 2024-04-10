# SO WHAT'S UP!

## HERE'S  THE  QUESTION


#  
>A firm wants to determine the highest floor of its n-story headquarters from which a gadget can fall without breaking. The firm has two identical gadgets to experiment with. If one of them gets broken, it cannot be repaired, and the experiment will have to be completed with the remaining gadget. Design an algorithm in the best efficiency class you can to solve this problem.


# **SOLUTION:**


###  ***Binary Search +Sequential Search*** 

###  a) `First gadget breaks from the middle floor`

> If the 1st gadget breaks after dropping from the  `n/2 th` floor , then we drop the 2nd one simultaneously  from `1st` floor  to `((n/2) -1) th`   floor.



###  b) `First gadget does not break from  the middle floor`

> If the first gadget does not break after dropping from the  `n/2 th` floor , then we check from the `middle` floor between `(n/2)+1 th` floor  `nth` floor.
>If the first gadget breaks at the middle floor ,then we can check if the second gadget falls between the `(n/2)+1 th` floor  and the middle floor.



###  We keep repeating this process(both steps `a)` and `b)` ), this  would finally return the   highest floor of its n-story headquarters from which a gadget can fall without breaking
