public class reverseSLL{
    static Node head;
    class Node{
        int data;
        Node next;

        Node(int x){
            data  = x ;
            next = null;
        }
    }

    public Node reverse (Node node){
        Node curr , prev , frwd ;
        prev =null;
        frwd = null;
        curr = node;
    
        while(curr!= null){
            frwd = curr.next;
            curr.next=prev;
            prev = curr;
            curr = frwd;
        }
        node = prev;
        return node;

    }

    public static void main (String [] args){
        reverseSLL list = new reverseSLL();
        //call revese(head)

    }
}