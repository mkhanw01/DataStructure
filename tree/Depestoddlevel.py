class Node:
    def __init__ (self,key):
        self.data=key
        self.left=None
        self.right=None
def getmax(node,level):
    if node is None:
        return 0;
    if node.left is None and node.right is None and level&1:
        return level;
    return(max(getmax(node.left,level+1),getmax(node.right,level+1)))

root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
root.left.right.left=Node(6)
root.left.right.left.right=Node(7)
root.left.right.right=Node(8)
print(getmax(root,1))
