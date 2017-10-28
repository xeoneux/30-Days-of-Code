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
  let mealCost: number = parseFloat((await getline()).toString());
  let tipPercent: number = parseFloat((await getline()).toString());
  let taxPercent: number = parseFloat((await getline()).toString());
  let tip = tipPercent * mealCost / 100;
  let tax = taxPercent * mealCost / 100;
  let totalCost = tip + tax + mealCost;
  console.log("The total meal cost is %i dollars.", totalCost);  
})();