class Node
{
  Node left,right;
   int data;
  Node(int item)
  {
   data=item;
   left=right=null;
   }
}
class Distance_k
{
  static Node root;
  public void print_node(Node node,int k)
    {
      if(node==null)
         return;
     if(k==0)
        {
           System.out.print(node.data+" ");
             return;
         }
     else
       {
         print_node(node.left,k-1);
         print_node(node.right,k-1);
           }
     }
  public static void main(String arg[])
   {
    Distance_k tree=new Distance_k();
     tree.root=new Node(1);
     tree.root.left=new Node(2);
     tree.root.right=new Node(3);
     tree.root.left.right=new Node(4);
     tree.root.right.left=new Node(5);
      tree.print_node(root,2);
     }
}