class Node:
    def __init__ (self,key):
        self.left=None
        self.right=None
        self.data=key

def printf(arr):
    for i in range(0,len(arr)):
        print(i)

def printoneline(root,arr,l):
    if root is None:
        return 
        arr[l]=root.data
        print(root.data)
        l=l+1
    
    if root.left is None and root.right is None:
        printf(arr)
    else:
        printoneline(root.left,arr,l)
        printoneline(root.right,arr,l)
def inoneline(root):
    arr=[]
    printoneline(root,arr,0)
        
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
inoneline(root)
