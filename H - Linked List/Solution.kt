import java.util.Scanner

internal class Node(var data: Int) {
    var next: Node? = null

    init {
        next = null
    }
}

internal object Solution {
    fun insert(head: Node?, data: Int): Node {
        if (head == null)
            return Node(data)
        else {
            var curr = head
            while (curr?.next != null) {
                curr = curr.next
            }
            curr?.next = Node(data)
        }
        return head
    }

    fun display(head: Node?) {
        var start: Node? = head
        while (start != null) {
            print(start.data.toString() + " ")
            start = start.next
        }
    }

    @JvmStatic fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var head: Node? = null
        var N = sc.nextInt()

        while (N-- > 0) {
            val ele = sc.nextInt()
            head = insert(head, ele)
        }
        display(head)
        sc.close()
    }
}
