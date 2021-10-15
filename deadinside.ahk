a = 1000
b = 993
F7::
loop

{
    Send, %a% - 7 = %b% {Enter}
    a := (a-7)
    b := (b-7)
    if (a<=0 or b<=0)
    break
}
exitapp