class Node:
    def __init__ (self,key):
        self.data=key
        self.left=None
        self.right=None
def hieght(node):
    if node is None:
        return 0
    else:
        lh=hieght(node.left)
        rh=hieght(node.right)
        if lh>rh:
            return lh+1
        else:
            return rh+1
def getlevel(node,i):
    if node is None:
        return
    if i==1:
        print(node.data,"",end='')
    elif i>1:
        getlevel(node.left,i-1)
        getlevel(node.right,i-1)

def levelreverse(node):
    h=hieght(node)
    for i in reversed(range(1,h+1)):
        getlevel(node,i)
        

root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.right=Node(5)
root.left.left=Node(4)
root.right=Node(3)
levelreverse(root)
