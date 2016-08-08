class Node:
    def __init__ (self,key):
        self.data=key
        self.left=None
        self.right=None
def height(node):
    if node is None:
        return 0
    else :
        lheight = height(node.left)
        rheight = height(node.right)
        if lheight > rheight :
            return lheight+1
        else:
            return rheight+1
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
print(height(root))
