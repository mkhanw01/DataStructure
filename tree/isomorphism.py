class Node:
    def __init__ (self,key):
        self.left=None
        self.right=None
        self.data=key
def isIso(node1,node2):
    if node1 is None and node2 is None:
        return True
    if node1 is None or node2 is None:
        return False
    if node1.data is not node2.data:
        return False
    return (isIso(node1.left,node2.left)and isIso(node1.right,node2.right)or isIso(node1.left,node2.right)and isIso(node1.right,node2.left))
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
root.right.left=Node(6)
root1=Node(1)
root1.right=Node(2)
root1.left=Node(3)
root1.left.right=Node(6)
root1.right.left=Node(4)
root1.right.right=Node(5)
if(isIso(root,root1)):
    print("True")
else:
    print("False")
        
