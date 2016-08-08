class Node
  {
   int data;
  Node left,right;
   Node(int item)
    {
       data=item;
      left=right=null;
     }    
}

class Balance
{
  static Node root;
  boolean isBalance(Node node)
      {
        int lh,rh;
           if(node==null)
              return true;
            lh=hieght(node.left);
            rh=hieght(node.right);
               if(Math.abs(lh-rh<=1)&& isBalance(node.left)&&(node.right))
           return false;
       }
int max(int x,int y)
{
     return (x>y)?x:y;
}
int hieght(Node node)
  {
    if(node==null)
       return 1;
      return 1+max(hieght(node.left),hieght(node.right));
 }
   public static void main(String arg[])
    {
      Balance tree=new Balance();
      tree.root=new Node(1);
      tree.root.left=new Node(2);
      tree.root.left.right=new Node(3);
      tree.root.left.left=new Node(4);
      tree.root.right=new Node(5);
     tree.root.right.left=new Node(6);
     tree.root.left.left.left=new Node(7);
 if(tree.isBalance(root))
   System.out.println("tree is balanced..");
else
  System.out.println("Not balanced");
     }
}