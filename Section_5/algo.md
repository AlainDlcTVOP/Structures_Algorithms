##Algorithm for FIFO Queue using 1-D array
-------------------------------------------
##Initial declarations:
---------------------

  REAR : is an integer variable to hold the index of the rear end of Q, that is
          the index of the next insertion element.

  FRONT : is an integer variable to hold the index of the front end of Q, that is
            the index of the next element to be deleted.

  ITEM[SIZE] :  Is an 1-D array that we will be using for keeping the queue elements
                SIZE is the size of the Queue, that is the number of elements in the array.
                We consider the index of the array starts from 0.
  Initially:
              REAR = 0
              FRONT = 0

   OPERATION ENQUEUE(V):
        IF REAR == SIZE THEN
              PRINT "QUEUE OVERFLOW"
              EXIT ENQUEUE
        END IF
        ITEM[REAR] = V
        REAR = REAR + 1
  END ENQUEUE

  OPERATION DEQUEUE:
        IF REAR == FRONT THEN
            PRINT "QUEUE UNDERFLOW"
            EXIT DEQUEUE
        END IF

        V = ITEM[FRONT]
        FRONT = FRONT + 1
        RETURN V
  END DEQUEUE          
