# opt-Euclidean-gcd
Euclidean gcd implementation using the tail call optimization

## usage
Compile with the option `-fstack-usage` which checks the stack memory used for each functions.
```
$ gcc -fstack-usage gcd.c
```

See the output and information about the stack memory.
```
$ ./a.out
0.607950
$ cat gcd.su
gcd.c:6:Euclidean_gcd_rec1      24      static
gcd.c:12:Euclidean_gcd_rec2     8       static
gcd.c:21:main   24      static
```
