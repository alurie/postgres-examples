### example of a simple extension

1. Build
   ```
   make 
   make install
   ```

1. Install
   ```
   postgres=# create extension myext;
   CREATE EXTENSION
   ```

1. Run
   ```
   postgres=# select my_hello('Neo');
     my_hello
   ------------
    Hello, Neo
   (1 row) 
   ```

