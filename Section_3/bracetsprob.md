## Algorithm for the problem
error = FALSE

while Not end of the expression
    next_char = next character of input expresion
    if next_char is == '(' OR next_char == '{' Or next_char == '[' then
        push(STACK, next_char)
    else if next_char == ')' Or next_char == '}' OR next_char == ']' then
        if isEmpty(STACk) then 
        error = TRUE
        break while
    else if is isOpenningMatch(stacktop(STACK), next_char) then 
        pop(STACK)
    else
         error = TRUE
         break while
    end if
end if
end while

if !error and !isEmpty(STACK) then 
    error = TRUE
end if

if error then
    print "The input expression does not contain well formed brackets"
else
    print "The input expression is well formed"

end