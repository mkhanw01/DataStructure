class Node:
    def __init__ (self,key):
        self.left=None
        self.right=None
        self.data=key

def C(root):
    if root is None:
        return 0
    if root.left is None and root.right is None:
        return 1
    else:
        return C(root.left)+C(root.right)
        
        
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.right=Node(4)
root.right.right=Node(5)
root.right.left=Node(7)
print(C(root))
