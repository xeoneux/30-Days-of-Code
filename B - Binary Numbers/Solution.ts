import readline = require("readline")

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

rl.question("", inputString => {
  
  var maximum: number = 0
  var result: number = 0

  while(inputString > 0) {
    ~~(inputString % 2) == 1 ? result++ : result = 0
    if(result > maximum)
      maximum = result
    inputString = ~~(inputString / 2)
  }

  console.log(maximum)

  rl.close()
});