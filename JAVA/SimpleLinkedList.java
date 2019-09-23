import java.util.Scanner;

class SimpleLinkedList {
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
    public void addLastNode(int data)
    {
        if (tail == null)
            head = tail = new Node(data);//empty list
        else
        {
            tail.next = new Node(data); //link new node as last node
            tail = tail.next; //make tail pointer points to last node
        }
        size++; //increase list size by one
    }

//================= your part to complete ==============

    //method add first node
    public void addFirstNode(int data)
    {
        if(head == null)
            head = tail = new Node(data);
        else {
            Node node = new Node(data);
            node.next = head;
            head = node;
        }
        size++;
    }
  
    //method add node at index
    public void addAtIndex(int index, int data)
    {
        if(index > size)  
            return;
        if(index == 0)
            addFirstNode(data);
        else if(index == size)
            addLastNode(data);
        else {   
            Node node = new Node(data);
            int i=0;
            Node current = head;

            while(i < index -1) {  
                current = current.next;
                i++;
            }
            node.next = current.next;
            current.next = node;
            size++;
        }
    }

    //method remove first node
    public void removeFirstNode()
    {
        if(head == null)
            return;
        if(head.next == null)
        {
            head=tail = null;
        }
        else {
            head = head.next;
        }
        size--;
    }
  
    //method remove last node
    public void removeLastNode()
    {
        if(tail == null)  
            return;
        if(head.next == null)
            head=tail=null;
        else {
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
            return;
        if(index == 0)
            removeFirstNode();
        else if(index == size-1)
            removeLastNode();
        else {
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
        while (temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
      
    //class to create nodes as objects
    private class Node
    {
        private int data; //data field
        private Node next; //link field

        public Node(int item) //constructor method
        {
            data = item;
            next = null;
        }
    }
}

// This works fine and i understand it now. Here is a working solution for program MyTest.java :

public class LinkedListTestDrive {

    public static void main (String[] args)
    {
        LinkedList myList = new LinkedList(); //create a list object

        for (int i=1; i <= 5; i++) //add 5 nodes to the list
        {
            myList.addLastNode(i);
        }
          
        System.out.println("Testing method addFirstNode()");
        System.out.println("Adding value 25 as first Node. ");   
        System.out.print("List content before adding 25 is : ");
        myList.printList();
        myList.addFirstNode(25);
        System.out.print("\nList content after adding 25 is : ");
        myList.printList();

        System.out.println("\n\nTesting method addAtIndex()");
        System.out.println("Adding value 45 at index 3. ");   
        System.out.print("List content before adding value 45 at index 3 : ");
        myList.printList();
        myList.addAtIndex(3, 45);
        System.out.print("\nList content after adding value 45 at index 3 : ");
        myList.printList();
          
        System.out.println("\n\nTesting method removeFirstNode()");
        System.out.println("Removing first node value 25. ");   
        System.out.print("List content before removing first node : ");
        myList.printList();
        myList.removeFirstNode();
        System.out.print("\nList content after removing first node : ");
        myList.printList();

        System.out.println("\n\nTesting method removeLastNode()");
        System.out.println("Removing last node value 5. ");   
        System.out.print("List content before removing last node : ");
        myList.printList();
        myList.removeLastNode();
        System.out.print("\nList content after removing last node : ");
        myList.printList();

        System.out.println("\n\nTesting method removeAtIndex()");
        System.out.println("Removing node at index 1, value 2. ");   
        System.out.print("List content before removing node at index 1 : ");
        myList.printList();
        myList.removeAtIndex(1);
        System.out.print("\nList content after removing node at index 1 : ");
        myList.printList();
    }
}