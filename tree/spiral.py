class Node:
    def __init__ (self,key):
        self.data=key
        self.left=None
        self.right=None
def hieght(root):
    if root is None:
        return 0
    else:
        lh=hieght(root.left)
        rh=hieght(root.right)
        if(lh<rh):
            rh+1
        else:
            lh+1
            
def printspiral(root,i,tr):
    if root is None:
        return
    if i==1:
        print(root.data)
    elif i>1:
        if tr:
            printspiral(root.left,i,tr)
            printspiral(root.right,i,tr)
        else:
            printspiral(root.right,i,tr)
            printspiral(root.left,i,tr)
            
def spiral(root):
    h=height(root)
    for i in range(1,h+1):
        tr ~=True
        printspiral(root,i,tr)
        

root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
spiral(root)
