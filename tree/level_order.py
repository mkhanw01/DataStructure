class Node:
    def __init__(self,key):
        self.data=key
        self.left=None
        self.right=None

def hieght(root):
    if root is None:
        return 0
    else:
        lh=hieght(root.left)
        rh=hieght(root.right)
        if lh>rh:
            return lh+1
        else:
            return rh+1
        
def printlevel(root,level):
    if root is None:
        return
    if level==1:
        print(root.data)
    elif level>1:
        printlevel(root.left,level-1)
        printlevel(root.right,level-1)

def printlevelorder(root):
    h=hieght(root)
    for i in range(1,h+1):
        printlevel(root,i)


root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.right.right=Node(5)
print("level order traversal..--")
printlevelorder(root)
