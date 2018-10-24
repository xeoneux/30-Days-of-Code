data class Node(var data: Int) {
    var next: Node? = null
}

fun insert(head: Node?, data: Int): Node {
    if (head == null) {
        return Node(data)
    } else {
        var curr: Node? = head
        while (curr?.next != null) {
            curr = curr.next
        }
        curr?.next = Node(data)
    }
    return head
}

fun display(head: Node?) {
    var curr: Node? = head
    while (curr != null) {
        print(curr.data)
        print(" ")
        curr = curr.next
    }
}

fun main(args: Array<String>) {
    var head: Node? = null
    var N = Integer.parseInt(readLine())
    while (N-- > 0) {
        val element = Integer.parseInt(readLine())
        head = insert(head, element)
    }
    display(head)
}
