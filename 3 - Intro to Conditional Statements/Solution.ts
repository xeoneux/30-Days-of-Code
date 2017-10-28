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
  const N = parseInt((await getline()).toString());

  if (N % 2 !== 0) console.log("Weird");
  else if (N <= 5) console.log("Not Weird");
  else if (N <= 20) console.log("Weird");
  else console.log("Not Weird");

  rl.close();
})();
