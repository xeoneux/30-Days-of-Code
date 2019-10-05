import readline = require("readline")

var line: String;

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

const getline = () => {
  return new Promise(resolve => {
    rl.question("", resolve)
  })
}

(async () => {
  let n = parseInt((await getline()).toString())

  let queries = new Map<String, number>(); 

  for(var i = 0;i < n;i++) {
    let entries: string[] = (await getline()).toString().split(" ")
    queries.set(entries[0], parseInt(entries[1]))
  }

  for(var i = 0;i < n;i++) {
    let query: string = (await getline()).toString()
    console.log(queries.get(query) == undefined ? "Not found" : `${query}=${queries.get(query)}`);
  }
})();