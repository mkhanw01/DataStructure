class Node:
    def __init__(self,key):
        self.left=None
        self.right=None
        self.data=key

def inorder(root):
    if root is None:
        return;
    inorder(root.left)
    print(root.data)
    inorder(root.right)

def increment(root,dif):
    if root is None:
        return;
    if root.left is not None:
        root.left.data +=dif
        increment(root.left,dif)
    elif root.right is not None:
        root.right.data +=dif
        increment(root.right,dif)
        
def convert(root):
    ldata=0
    rdata=0
    if ((root is None) or(root.left is None)and(root.right is None)):
        return;
    else:
        convert(root.left)
        convert(root.right)
        if root.left is not None:
            ldata=root.left.data
        if root.right is not None:
            rdata=root.right.data
        dif=ldata+rdata-root.data
        if dif>0:
             root.data +=dif
        if dif<0:
            increment(root,-dif)
    
root=Node(50)
root.left=Node(7)
root.right=Node(2)
root.left.left=Node(3)
root.left.right=Node(5)
root.right.left=Node(1)
root.right.right=Node(30)
inorder(root)
convert(root)
inorder(root)


