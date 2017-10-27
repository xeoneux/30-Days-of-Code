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

(async () => {
  let N = parseInt((await getline()).toString());
  for (let i = 1; i < 11; i++) {
    console.log(N + " x " + i + " = " + N * i);
  }
})();
