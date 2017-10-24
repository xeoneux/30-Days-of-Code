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

const i = 4;
const d = 4.0;
const s = "HackerRank ";

(async () => {
  const i2 = await getline();
  const d2 = await getline();
  const s2 = await getline();
  console.log(i + parseInt(i2.toString()));
  console.log(d + parseFloat(d2.toString()));
  console.log(s + s2.toString());
  rl.close();
})();
