class Node:
    def __init__ (self,key):
        self.left=None
        self.right=None
        self.data=key

def inorder(node):
    if node is not None:
        inorder(node.left)
        print(node.data,"",end='')
        inorder(node.right)

def convertSum(node):
    if node is None:
        return 0;
    old_data=node.data
    node.data=convertSum(node.left)+convertSum(node.right)
    return node.data+old_data;

root=Node(10)
root.left=Node(-2)
root.left.left=Node(8)
root.left.right=Node(-4)
root.right=Node(6)
root.right.left=Node(7)
root.right.right=Node(5)
inorder(root)
print()
convertSum(root)
# print()
inorder(root)
