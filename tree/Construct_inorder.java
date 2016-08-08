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
 class Construct_inorder
  {
    static Node root;
      public void inorder(Node node)
             {
                if(node==null)
                    return;
                  inorder(node.left);
                 System.out.print(node.data+" ");
                   inorder(node.right);
              }
            int getMax(int arr[],int start,int end)
                 {
                   int max=arr[start];
                   int maxindex=start;
                    for(int i=start+1;i<=end;i++)
                          {
                            if(arr[i]>max)
                                {
                                  max=arr[i];
                                  maxindex=i;
                                 }
                           }
                      return maxindex;
                  }
           Node cons(int arr[],int start,int end,Node node)
              {
                if(start>end)
                     return null;
                  int max=getMax(arr,start,end);
                  node=new Node(arr[max]);
                 if(start==end)    
                       return node;
                  node.left=cons(arr,start,max-1,node.left);
                   node.right=cons(arr,start,max+1,node.right);
                     return node;
               }
       public static void main(String arf[])
           {
		Construct_inorder tree=new Construct_inorder();
                int ino[]=new int[]{5,10,40,30,28};
                   Node node=tree.cons(ino,0,ino.length-1,root);
                   tree.inorder(node);
	     }
   }