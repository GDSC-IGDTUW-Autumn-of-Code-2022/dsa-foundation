
## Reversing a LL

HERE ,
    prev point to null , frwd point to null and curr point to head


In first iteration
          head
    null  ____   ->   ____  ->  ____  -> null 
    Prev  curr
    frwd

In second iteration
           
    null   ____   ->   ___  -> null
    prev   curr        frwd

    then,

    null  <-  ____     ___  -> null
    prev      curr     frwd

    then,

    null  <-  ____  <-   ___  -> null
              prev      curr    frwd

and finally

null  <-  ____  <-   ___    null
                     prev    curr    

