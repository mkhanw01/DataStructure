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

class SumEvenOdd
{
   static Node root;
	int Sum(Node node)
	{
		if(node==null)
		  return 0;
		return node.data-Sum(node.left)-Sum(node.right);
	}
   public static void main(String arg[])
    {
       SumEvenOdd tree=new SumEvenOdd();
       tree.root=new Node(1);
       tree.root.left=new Node(2);
       tree.root.left.right=new Node(3);
       tree.root.left.left=new Node(4);
       tree.root.right=new Node(5);
       tree.root.right.left=new Node(6);
      // tree.root.left.left.left=new Node(7);
	System.out.print("sum ="+tree.Sum(root));
     }
}