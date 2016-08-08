class Node:
    def __init__ (self,key):
        self.left=None
        self.right=None
        self.data=key
def hieght(root):
    if root is None:
        return 0
    return 1+max(hieght(root.left),hieght(root.right));
def isBalence(root):
    if root is None:
        return 1
    lh=hieght(root.left)
    rh=hieght(root.right)
    if abs(lh-rh)<=1 and isBalence(root.left)and isBalence(root.right):
        return 1
    return 0
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
if isBalence(root):
    print("Tree is Balenced")
else:
    print("Not Balenced")
    
