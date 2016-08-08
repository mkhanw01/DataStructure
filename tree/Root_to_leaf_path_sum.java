import java.lang.*;
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
class Root_to_leaf_path_sum
{
  static Node root;
   boolean hasSumLeaf(Node node,int sum)
     {
       if(node==null)
           return (sum==0);
      else
         {
           boolean res=false;
             int subsum=sum-node.data;
              if(subsum==0 &&  node.left==null && node.right==null)
                        return true;
              if(node.left !=null)
                res=res || hasSumLeaf(node.left,subsum);
              if(node.right !=null)
                 res=res || hasSumLeaf(node.right,subsum);
               return res;
           }
       }
   public static void main(String arg[])
    {
       int sum=21;
      Root_to_leaf_path_sum tree=new Root_to_leaf_path_sum();
       tree.root=new Node(10);
       tree.root.left=new Node(8);
       tree.root.right=new Node(2);
       tree.root.left.left=new Node(3);
       tree.root.left.right=new Node(5);
       tree.root.right.left=new Node(2);
         if(tree.hasSumLeaf(root,sum))
            System.out.println("sum is "+sum);
          else
            System.out.println("sum is not Found"+sum);
     }
}