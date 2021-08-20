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
   
   postgres=# \dx
                    List of installed extensions
     Name   | Version |   Schema   |         Description
   ---------+---------+------------+------------------------------
    myext   | 1.0     | public     | My extension
    plpgsql | 1.0     | pg_catalog | PL/pgSQL procedural language
   (2 rows)
   ```

1. Run
   ```
   postgres=# select my_hello('Neo');
     my_hello
   ------------
    Hello, Neo
   (1 row) 
   ```

