class Node
{
  int data;
  Node left,right;
  Node(int item)
    {
      left=right=null;
       data=item;
     }
}
class Index
 {
   int index=0;
  }
class Build_pre
{
 static Node root;
  Index myindex=new Index();
  void inorder(Node node)
    {
      if(node==null)
            return;
	   inorder(node.left);
           System.out.print(node.data+" ");
 	   inorder(node.right);
     }

public Node build_tree(int arr[],char ch[], Index myindex,int n,Node temp)
  {
   int index=myindex.index;
    if(index==n)    
         return null;
     temp=new Node(arr[index]);
      (myindex.index)++;
  if(ch[index]=='N')
    {
     temp.left=build_tree(arr,ch,myindex,n,temp);
     temp.right=build_tree(arr,ch,myindex,n,temp);
   }
   return temp;

  }
  
public Node build(int arr[],char ch[],int n,Node node)
     {
         int index=0;
        return build_tree(arr,ch,myindex,n,node);
       }
  public static void main(String arg[])
  {
    Build_pre tree=new Build_pre();
    int arr[]=new int[]{10,30,20,5,15};
     char ch[]=new char[]{'N','N','L','L','L'};
     Node node=tree.build(arr,ch,arr.length,root);
    System.out.println("After building tree");
    tree.inorder(node);
   }
}