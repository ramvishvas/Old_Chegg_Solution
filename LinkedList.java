public class LinkedList
{
   private Node head;
   public LinkedList()
   {
      head = null;
   
   }
   public void addFront(int newData)
   {
      Node newNode = new Node(newData);
      
         newNode.next = head;
         head = newNode;
        
   }
   public void addEnd(int newData)
   {
      Node newNode = new Node(newData);
      
      if(head == null)
         head = newNode;
      else
      {
         Node curNode = head;
         while(curNode.next!= null)
         {
            curNode = curNode.next;
            
         } 
         curNode.next = newNode;
      }
   }

   public void addAfter(int newData, int position)
   {
      Node newNode = new Node(newData);
      //validate the position --TODO
      if (position < 0 || position > countNodes()-1) 
      {
         System.out.println("Oops... Invalid Position! Can't Insert.");
         return;
      }
      
      //move the curNode to that position
      int cnt = 0;
      Node curNode = head;
      
      while(cnt<position)
      {
         cnt++;   
         curNode = curNode.next;
      }
      
      newNode.next = curNode.next;
      curNode.next = newNode;
      
   }


   public void removeFront()
   {
      if(isEmpty())
         throw new IllegalStateException("Empty list");
      
      Node temp = head;   
      head =  head.next;
      
      temp = null;
   
   }
   
   public void removeEnd()
   {
      if(isEmpty())
         throw new IllegalStateException("Empty list");
      
      if(head.next==null)
         removeFront();
      else
      {
      Node curNode = head;  
      
      Node prevNode = curNode; 
      
      while(curNode.next!=null)
      {
         prevNode = curNode;
         curNode = curNode.next;
      }
      
       prevNode.next = null;
       curNode = null;
      }     
   }

   public void removeAt(int position)
   {
      if(isEmpty())
         throw new IllegalStateException("Empty list");

      int numOfNodes = countNodes();
    
      //validate the position --TODO
      if (position < 0 || position > countNodes()-1) 
      {
         System.out.println("Oops... Invalid Position! Can't remove.");
         return;
      }
  
      if(position == 0 )  
         removeFront();
      else if(position == numOfNodes-1)
      {
         removeEnd();
      }   
      else  
      {
         Node curNode = head;  
         int i=0;
           
         while(i < position-1) 
         {
            curNode = curNode.next;
            i++;
         }
         curNode.next = curNode.next.next;
      }
   }
   
   public void removeAll()
   {
   //TODO
      head = null;
   }
   
   public boolean contains(int target)
   {
   
      Node curNode = head;
      while(curNode!=null)
      {
         if(curNode.data ==  target)
            return true;
         curNode = curNode.next;
        
      }
      
      return false;

   }
   
   public boolean isEmpty()
   {
      
      return head == null;
   
   }

   public int countNodes()
   {
      Node curNode = head;
      int count = 0;
      while(curNode != null)
      {
         ++count;
         curNode = curNode.next;
      }
      return count;
   }
   
   public void displayList()
   {
      Node curNode = head;
      while(curNode!=null)
      {
         System.out.print(curNode.data +"-->");
         curNode = curNode.next;
        
      }
      
      System.out.println();
   
   }
   
   private class Node 
   {
      int data;
      Node next;
      Node(int d) 
      { 
         data = d;
         next=null; 
      } // Constructor
   }

   public static void main(String[] args)
   {
      LinkedList list = new LinkedList();
      for(int i = 1; i<10; i++)
        list.addFront(i);

      list.addFront(1);
      list.addFront(2);
      list.displayList();

      list.addEnd(500);
      list.addEnd(1000);
      list.displayList();

      list.addAfter(100, -1);
      list.displayList();
      list.addAfter(100, 0);
      list.displayList();
      list.addAfter(102, 2);
      list.displayList();
      list.addAfter(100, 11);
      list.displayList();
      list.addAfter(100, 18);
      list.displayList();

      list.removeFront();
      list.removeEnd();
      list.removeAt(0);
      list.removeAt(14);
      list.displayList();
      list.removeAt(2);
      list.displayList();

      System.out.println(list.contains(5));
      System.out.println(list.contains(10000));
      list.removeAll();
   }
}