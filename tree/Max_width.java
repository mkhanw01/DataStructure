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
class Max_width
{
 static Node root;
 int getMaxCount(int arr[],int h)
   {
    int max=arr[0]; 
      for(int i=1;i<h;i++)
        {
           if(arr[i]>max)
                max=arr[i];
         }
       return max;
    }
  void getMax(Node node,int count[],int level)
       {
          if(node !=null)
           {
            count[level]++;
            getMax(node.left,count,level+1);
            getMax(node.right,count,level+1);
           }
        }
int Hight(Node node)
    {
       if(node==null)
          return 0;
       else
         {
         int lh=Hight(node.left);
         int rh=Hight(node.right);
           return  (lh>rh?lh+1:rh+1);
          }
     }
  int max(Node node)
   {
     int h=Hight(node);
    int count[]=new int[50];
     int level=0;
      getMax(node,count,level);
      return getMaxCount(count,h);
     }
   public static void main(String arg[])
     {
        Max_width tree=new Max_width();
          tree.root=new Node(1);
           tree.root.left=new Node(2);
            tree.root.right=new Node(3);
          tree.root.left.right=new Node(4);
          tree.root.left.left=new Node(5);
          tree.root.right.left=new Node(6);
           tree.root.right.right=new Node(7);
     System.out.println("Maximum width is "+tree.max(root));
         }
  }