import java.util.HashMap;
class Node
{
  Node left;
  Node right;
  int data;
   Node(int item)
    {
       data=item;
      left=right=null;
     }
}
class verticalSum
{
 static Node root;
   public void vSum(Node node,int hd,HashMap<Integer,Integer>hm)
      {
          if(node==null)
                  return;
           vSum(node.left,hd-1,hm);
       int presum=(hm.get(hd)==null)?0:hm.get(hd);
        hm.put(hd,presum+node.data);
          vSum(node.right,hd+1,hm);
         }
  public void getVerticalSum(Node node)
     {
        if(root==null)
            return ;
        HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
       vSum(node,0,hm);
        if(hm!=null)
         {System.out.println(hm.entrySet());
           }
       }
   public static void main(String arg[])
     {
       verticalSum tree=new verticalSum();
         tree.root=new Node(1);
         tree.root.left=new Node(2);
         tree.root.right=new Node(3);
         tree.root.left.left=new Node(4);
         tree.root.left.right=new Node(5);
         tree.root.right.left=new Node(6);
          tree.root.right.right=new Node(7);
         tree.getVerticalSum(root);
      }
}