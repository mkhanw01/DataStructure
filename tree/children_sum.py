class Node:
    def __init__(self,key):
        self.data=key
        self.left=None
        self.right=None
 
def issum(root):
    ldata=0
    rdata=0
    if (root is None) or(root.left is None)and(root.right is None):
        return 1;
    else:
        if root.left is not None:
            ldata=root.left.data
        if root.right is not None:
            rdata=root.right.data
        if((root.data==ldata+rdata)and(issum(root.left))and(issum(root.right))):
            return 1;
        else:
            return 0;
        
root=Node(10)
root.left=Node(8)
root.right=Node(2)
root.left.left=Node(3)
root.left.right=Node(5)
root.right.left=Node(2)
if issum(root):
    print("Folow The property");
else:
    print("Not Folow the property")
