import readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("", inputString => {
  console.log("Hello, World.");
  console.log(inputString);
  rl.close();
});
