import readline from "readline";

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter Number", answer => {
  try {
    console.log(parseFloat(answer));
  } catch (error) {
    console.log("Bad String");
  }
  rl.close();
});
