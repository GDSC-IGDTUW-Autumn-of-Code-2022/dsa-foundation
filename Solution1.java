public class Solution {
    // METHOD 1-
    // ABOUT -
    // Pointers are maintained and list is traversed.
    // If both the elements are equal then remove both
    // and insert the element to the tail. Else remove the smaller element among both the lists.


    // nodes pointing to heads of  1st and 2nd linked lists
    static Node a = null, b = null;

    // dummy node for storing answer of intersection of list
    static Node dummy = null;

    //  node named tail - for pointing to last node
    // so that while insertion we don't have to traverse the entire list
    static Node tail = null;

    // defining node class structure
    static class Node {
        int data;
        Node next;

   //Constructor
        Node(int data) {
            this.data = data;
            next = null;
        }
    }

    // print function
    void printList(Node start) {
        Node p = start;
        while (p != null) {
            System.out.print(p.data + " ");
            p = p.next;
        }
        System.out.println();
    }

    // function for inserting elements into list
    public static void push(int data) {
        Node temp = new Node(data);
        // checking if list was empty
        if(dummy == null) {
            dummy = temp;
            tail = temp;
        }
        else {
            tail.next = temp;
            tail = temp;
        }
    }

    // function for returning  intersection
   public static Node sortedIntersect()
    {

        // pointers for iterating the list
        Node p = a,q = b;
        while(p != null && q != null)
        {
            if(p.data == q.data)
            {
                // add to dummy list
                push(p.data);
                p = p.next;
                q = q.next;
            }
            else if(p.data < q.data)
                p = p.next;
            else
                q= q.next;
        }
        return dummy;
    }

    // Driver code
    public static void main(String args[]) {
        
    }
}


