class Node {
    var data: Int
    var next: Node?

    init(data: Int) {
        self.data = data
        self.next = nil
    }
}

func insert(head: Node!, data: Int!) -> Node {
    var head = head
    if head == nil {
        head = Node(data: data)
    } else {
        var curr: Node = head
        while curr.next != nil {
            curr = curr.next!
        }
        curr.next = Node(data: data)
    }
    return head
}

func display(head: Node!) {
    var current: Node! = head
    while current != nil {
        print(current.data, terminator: " ")
        current = current.next
    }
}

var head: Node! = nil
var n: Int = Int(readLine(stripNewline: true)!)!

while n > 0 {
    let element = Int(readLine()!)
    head = insert(head, data: element)
    n = n - 1
}
display(head)
