import java.util.Scanner;

class LinkedList {
private Node head, tail;
private int size;
  
    //constructor to create a list object with head, tail, and size.
    public LinkedList()
    {
        head = null;
        tail = null;
        size = 0;
    }
  
    //method add node to end of list
    public void addLastNode(String data)
    {
        if (tail == null)
        {
            head = tail = new Node(data);//empty list
        }
        else
        {
            tail.next = new Node(data); //link new node as last node
            tail = tail.next; //make tail pointer points to last node
        }
        size++; //increase list size by one
    }

//================= your part to complete ==============

    //method add first node
    public void addFirstNode(String data)
    {
        if(head == null)
        {
            head = tail = new Node(data);
        }
        else 
        {
            Node node = new Node(data);
            node.next = head;
            head = node;
        }
        size++;
    }
  
    //method add node at index
    public void addAtIndex(int index, String data)
    {
        if(index > size)
        {
            System.out.println("Can't add item At Specified Index");
            return;
        }
        if(index == 0)
        {
            addFirstNode(data);
        }
        else if(index == size)
        {
            addLastNode(data);
        }
        else 
        {   
            Node node = new Node(data);
            int i=0;
            Node current = head;
            // getting correct index
            while(i < index -1) 
            {  
                current = current.next;
                i++;
            }
            // additing item at correct position
            node.next = current.next;
            current.next = node;
            size++;
        }
    }

    //method remove first node
    public void removeFirstNode()
    {
        if(head == null)
        {
            System.out.println("LinkedList is Empty");
            return;
        }
        if(head.next == null)
        {
            head=tail = null;
        }
        else 
        {
            head = head.next;
        }
        size--;
    }
  
    //method remove last node
    public void removeLastNode()
    {
        if(tail == null) 
        {
            System.out.println("LinkedList is Empty"); 
            return;
        }
        if(head.next == null)
        {
            head=tail=null;
        }
        else 
        {
            Node current = head;
            while(current.next.next != null)
                current = current.next;

            tail = current;
            tail.next = null;
        }
        size--;
    }
  
    //method remove node at index
    public void removeAtIndex(int index)
    {
        if(index >=size)
        {
            System.out.println("Can't remove item from Specified Index");
            return;
        }
        if(index == 0)
        {
            removeFirstNode();
        }
        else if(index == size-1)
        {
            removeLastNode();
        }
        else 
        {
            int i=0;
            Node current = head;
            while(i < index-1) {
                current = current.next;
                i++;
            }
            current.next = current.next.next;
            size--;
        }
    }

//================= end of your part ==============

    //method to print out the list
    public void printList()
    {
        Node temp;
        temp = head;
        System.out.print("List IS : ");
        while (temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
      
    //class to create nodes as objects
    private class Node
    {
        private String data; //data field
        private Node next; //link field

        public Node(String item) //constructor method
        {
            data = item;
            next = null;
        }
    }
}

// This works fine and i understand it now. Here is a working solution for program MyTest.java :

public class SimpleLinkedList {

    public static void main (String[] args)
    {
        LinkedList myList = new LinkedList(); //create a list object
        Scanner in = new Scanner(System.in);
        int index = 0;

        System.out.println("1. Add\n2. Remove\n3. Exit\n");
        while(true)
        {
            System.out.print("Enter Your Choice : ");
            int choice = in.nextInt() ;
            if(choice == 1)
            {
                System.out.print("Enter Index and Item : ");
                index = in.nextInt();
                // System.out.print("Enter  : ");
                String temp = in.next();
                myList.addAtIndex(index-1, temp);
                myList.printList();
            }
            else if(choice == 2)
            {
                    System.out.print("Enter Index : ");
                    index = in.nextInt();
                    myList.removeAtIndex(index-1);
                    myList.printList();
            }
            else if(choice == 3)
            {
                break;
            }
            else
            {
                System.out.println("Opps!!! Wrong Choice");
            }
        }
    }
}