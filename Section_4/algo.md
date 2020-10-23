### Algorithm for eveluation postfix string
----------------------------------------------
initialize(stack)
while not end of the postfix string:
    next_token = get the next token from postfix string
    if next_tokenis an operand then
        push(stack, next_token)
    else if next_token is an operator then
        opnd1 = pop(stack)
        opnd2 = pop(stack)
        result = operate (opnd1, opnd1, next_token)
        push(stack , reslt)
    end if
end while

print pop(stack)
