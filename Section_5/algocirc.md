##Algorithm for enqueue and dequque operations for Circular Queue
-----------------------------------------------------------------
##Initial :
ITEM IS AN 1-D ARRAY TO HOLD THE QUQUE ELEMENTS
REAR = SIZE - 1
FRONT = SIZE -1

OPERATION ENQUEUE(V):
    IF (REAR+1) % SIZE == FRONT THEN
        PRINT "QUEUE OVERFLOW"
        EXIT ENQUEUE
    END IF
    REAR = (REAR + 1) % SIZE
    ITEM[REAR] = V
END ENQUEUE

OPERATION DNQUEUE:
    IF REAR == FRONT THEN
        PRINT "QUEUE UNDERFLOW"
        EXIT DEQUEUE
    END IF
    FRONT = (FORNT +1) % SIZE
    V= ITEM[FRONT]
END DEQUEUE

