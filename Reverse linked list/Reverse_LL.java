import java.util.Scanner;
public class Reverse_LL {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public static Node takeInput(){
        Node head=null;
        Node tail= null;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter elements of LL");
        int elem= sc.nextInt();
        while(elem!=-1){
            Node newnode= new Node(elem);
            if(head==null){
                head=newnode;
                tail=newnode;
            }
            else{
                tail.next=newnode;
                tail=newnode;
              //  tail=tail.next;// got an erroe while usimg this
               // (that tail is null can't proceed further')
            }
            elem= sc.nextInt();
        }
        sc.close();
        return head;
    }
    public static Node reverse(Node node)
    {
        Node prev = null;
        Node current = node;
        Node next = null;
        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        node = prev;
        return node;
    }
    public static void print(Node head){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
    public static void main(String[] args) {
        Node head=takeInput();
        Node newhead= reverse(head);
        print(newhead);
    }
}
