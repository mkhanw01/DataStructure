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
class Print_root_to_leaf_path
{  
  static Node root;
    void printPath(Node node,int arr[],int len)  
      {
         for(int i=0;i<len;i++)
            System.out.print(arr[i]+" ");
         System.out.println("");
       }
    void findpath(Node node,int arr[],int len)
        {
           if(node==null)
             return;
           arr[len++]=node.data;
           if(node.left==null && node.right==null)
                 printPath(node,arr,len);
           else
             {
               findpath(node.left,arr,len);
              findpath(node.right,arr,len);
             }
        }
   void path(Node node)  
       {
           int arr[]=new int[10000];
             findpath(node,arr,0);
        }
   public static void main(String arg[])
       {
         Print_root_to_leaf_path tree=new Print_root_to_leaf_path();
          tree.root=new Node(10);
          tree.root.left=new Node(8);
           tree.root.left.left=new Node(3);
         tree.root.left.right=new Node(5);
         tree.root.right=new Node(2);
         tree.root.right.left=new Node(4);
        tree.path(root);
        }
 }