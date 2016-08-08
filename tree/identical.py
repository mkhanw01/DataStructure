class Node:
    def __init__(self,key):
        self.data=key
        self.left=None
        self.right=None

def identical(root,root1):
    if root is None and root1 is None:
        return True
    if root is not None and root1 is not None:
        return((root.data==root1.data)and
               identical(root.left,root1.left)and
               identical(root.right,root1.right))
               
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root1=Node(1)
root1.left=Node(2)
root1.right=Node(3)
root1.left.left=Node(4)
print(identical(root,root1))
