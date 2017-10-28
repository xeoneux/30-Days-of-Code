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
  const mealCost = parseFloat((await getline()).toString());
  const tipPercent = parseInt((await getline()).toString());
  const taxPercent = parseInt((await getline()).toString());
  const tip = tipPercent * mealCost / 100;
  const tax = taxPercent * mealCost / 100;
  const totalCost = tip + tax + mealCost;
  console.log(`The total meal cost is ${totalCost} dollars.`);
  rl.close();
})();
