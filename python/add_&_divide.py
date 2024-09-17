# taking two number as input
a = int(input("Enter First number: "))   
b = int(input("Enter Secondnumber: "))
# taking operator as string in input
OP = input("Enter the oiperation(+,/): ")
if OP == "+":
    Sum = a +b    #performing addition
    print(Sum)
elif OP== "/":     #performing division
    if a < b:
        div1 = b/a
        print(div1)
    elif a > b:
        div2 = a/b 
        print(div2)