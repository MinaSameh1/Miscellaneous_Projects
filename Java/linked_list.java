//package java;

public class linked_list {
	Node head;

	class Node {
		private int data;
		Node next;

		public Node(int d){
			data = d;
			next = null;
		}
	}

	public int getData(Node n){
		return n.data;
	}
	
	public void add_node(int d){

		if( head == null ){
			head = new Node(d);
			return;
		}

		Node n = new Node(d);
		Node temp = head;
		Node prev = null;
		while(temp.next != null && n.data > temp.data ){
			if ( temp.next == null )
				break;
			prev = temp;
			temp = temp.next;
		}
		// if the data is the largest append to the last
		if(temp.next == null)
		{
			n.next=null;
			temp.next=n;
		}
		else if( n.data > temp.data )
		{
		n.next = temp.next;
		temp.next = n;
		} 
		else
		{
			n.next = temp;
			try{
			System.out.println( prev );
			if( prev.next != null )
				head.next = n;
			} catch( Exception e ){
				System.out.println( prev.next );
				System.out.println( prev.data );
				System.out.println( prev );
				System.out.println( e.getMessage() );
			}

			System.out.println(" N " + n.data + " < TEMP " + temp.data);
		}
		return;
	}

	public void print_list(){
		Node temp = head;
		while(temp != null )
		{
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
	}

	public void print_list_rec(Node n){
		if( n == null )
			return;
		System.out.print( n.data + " " );
		print_list_rec(n.next);
	}

	public static void main(String[] args){
		linked_list llist = new linked_list();
		llist.add_node(51);
		llist.add_node(6);
		llist.add_node(8);
		llist.add_node(7);
		llist.print_list_rec(llist.head);
		System.out.println();
	}
}
