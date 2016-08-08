class Node:
    def __init__(self,key):
        self.data=key
        self.left=None
        self.right=None
def size(root):
    if root is None:
        return 0
    else:
        return(size(root.left)+1+(size(root.right)))
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.right=Node(24)
print(size(root))
