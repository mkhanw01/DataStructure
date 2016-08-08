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
class Boundary
{
	static Node root;
	public void clockWise(Node node)
		{
			if(node!=null)
			{
				if(node.left!=null)
				{
					System.out.print(node.data+" ");
					clockWise(node.left);
				}
      				else if(node.right!=null)
				{
				 	System.out.print(node.right);	
					clockWise(node.right);
				}
			}
		}
	public void printleaf(Node node)
	{
		if(node!=null)
		{
			printleaf(node.left);
 			if(node.left==null && node.right==null)
			  System.out.print(node.data+" ");
			printleaf(node.right);
		}
	}
	public void anticlockWise(Node node)
	{
		if(node!=null)
		{
			if(node.right!=null)
			{
				anticlockWise(node.right);
				System.out.print(node.data+" ");
			}
			else if(node.left!=null)			
			{
				anticlockWise(node.left);
				System.out.print(node.data+" ");
			}
		}	
	}
	public void printBoundary(Node node)
		{
			System.out.print(node.data+" ");
			clockWise(node.left);
			printleaf(node);
			anticlockWise(node.right);
		}
	public static void main(String arg[])
	{
		Boundary tree=new Boundary();
		tree.root=new Node(1);
		tree.root.left=new Node(2);
		tree.root.right=new Node(3);
		tree.root.left.left=new Node(4);
		tree.root.left.right=new Node(5);
		tree.root.left.right.left=new Node(6);
		tree.root.right.right=new Node(7);
		tree.root.right.right.left=new Node(8);
                tree.printBoundary(root);
	}
}