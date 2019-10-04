import readline = require("readline")

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

rl.question("", inputString => {
  
  var binaryN: String = ""
  var maximum: number = 0

  while(inputString>0){
    binaryN = (String)(~~(inputString%2)) + binaryN
    inputString = ~~(inputString/2)
  }

  for(var i = 0, z = 0;i < binaryN.length; i++){
    binaryN[i] == '1' ? z++ : z = 0

    if(z > maximum)
      maximum = z
  }

  console.log(maximum)

  rl.close()
});
