class Node:
    def __init__(self,key):
        self.left=None
        self.right=None
        self.data=key
def miror(node):
    if node is None:
        return 0
    miror(node.right)
    print(node.data)
    miror(node.left)
root=Node(1)
root.left=Node(3)
root.right=Node(2)
root.right.left=Node(5)
root.right.right=Node(4)
miror(root)
    
    
