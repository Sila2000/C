Vector is nothing but 1-D array

ALGORITHM FOR:
DELETION:

Step 1: Initialize array 'arr' of size n and enter elements into it

Step 2: Enter the index of deletion, post_del.

Step 3: Begin Deletion:
          if post_del < 0 and post_del > n:
            print "deletion not possible."
          
          else:
            run a 'for' loop from i = post_del to i < size:
              arr[i] = arr[i + 1]
            end for
            print out the vector after deletion 

Step 4: Exit
