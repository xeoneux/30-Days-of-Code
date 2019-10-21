// insert element at the position index 
// of the list 
insertAt(element, index) 
{ 
    if (index > 0 && index > this.size) 
        return false; 
    else { 
        // creates a new node 
        var node = new Node(element); 
        var curr, prev; 
  
        curr = this.head; 
  
        // add the element to the 
        // first index 
        if (index == 0) { 
            node.next = head; 
            this.head = node; 
        } else { 
            curr = this.head; 
            var it = 0; 
  
            // iterate over the list to find 
            // the position to insert 
            while (it < index) { 
                it++; 
                prev = curr; 
                curr = curr.next; 
            } 
  
            // adding an element 
            node.next = curr; 
            prev.next = node; 
        } 
        this.size++; 
    } 
} 
