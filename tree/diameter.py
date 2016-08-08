class Node:
    def __init__(self,key):
        self.left=None
        self.right=None
        self.data=None

def H(root):
    if root is None:
        return;
    lh=H(root.left)
    rh=H(root.right)
    if lh>rh:
        return lh
    else:
        return rh

def D(root):
    if root is None:
        return;
    lh=H(root.left)
    rh=H(root.right)
    ld=D(root.left)
    rd=D(root.right)
    return max(lh+rh+1,max(ld,rd))
root=Node(1)
root.right=Node(2)
root.left=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
root.right.left=Node(6)
root.right.right=Node(7)
print(D(root))
