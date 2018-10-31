import readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

const getline = () => {
  return new Promise(resolve => {
    rl.question("", resolve);
  });
};

class LinkedNode
{
    public data: number;
    public next: LinkedNode;
    constructor(d: number)
    {
        this.data = d;
        this.next = null;
    }

}

class Solution
{
    public static insert(head: LinkedNode, data: number): LinkedNode
    {
        if (head == null) head = new LinkedNode(data);
        else {
            let curr: LinkedNode = head;
            while (curr.next != null) curr = curr.next;
            curr.next = new LinkedNode(data);
        }
        return head;
    }

    public static display(head: LinkedNode): void
    {
        let start: LinkedNode = head;
        while (start != null)
        {
            console.log(start.data + " ");
            start = start.next;
        }
    }
}


const main = async () => {
    let head: LinkedNode = null;
    let T = parseInt((await getline()).toString());
    while (T-- > 0)
    {
        let data = parseInt((await getline()).toString());
        head = Solution.insert(head, data);
    }
    Solution.display(head);
}


main();
