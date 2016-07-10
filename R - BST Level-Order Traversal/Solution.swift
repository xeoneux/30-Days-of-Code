// Start of class Node

class Node {
    var data: Int
    var left: Node?
    var right: Node?

    init(d: Int) {
        data = d
    }
}

// End of class Node

// Start of class Tree

class Tree {
    func insert(root: Node?, data: Int) -> Node? {
        if root == nil {
            return Node(d: data)
        }

        if data <= root?.data {
            root?.left = insert(root?.left, data: data)
        } else {
            root?.right = insert(root?.right, data: data)
        }

        return root
    }

    func levelOrder(root: Node?) {
        var queue = [Node]()
        queue.append(root!)

        while queue.count != 0 {
            let curr = queue.removeFirst()
            print("\(curr.data) ", terminator: "")

            if curr.left != nil {
                queue.append(curr.left!)
            }
            if curr.right != nil {
                queue.append(curr.right!)
            }
        }
    }
}

// End of class Tree

var root: Node?
var tree = Tree()

var t = Int(readLine()!)!

while t-- > 0 {
    t = t - 1

    root = tree.insert(root, data: Int(readLine()!)!)
}

tree.levelOrder(root)
