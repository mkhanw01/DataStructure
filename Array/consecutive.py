def cons(arr):
    tot=0
    for i in range(min(arr),max(arr)+1):
        tot +=i
    if tot==sum(arr):
        print("true..")
    else:
        print("False")
arr=[83,84,80,82,81,79,79]
cons(arr)
