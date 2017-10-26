let temp: string = "meal cost calculate";
let mealCost: number = 2000;
let tipPercent: number = 10;
let taxPercent: number = 20;
let tip = tipPercent * mealCost / 100;
let tax = taxPercent * mealCost / 100;
let totalCost = tip + tax + mealCost;
console.log("The total meal cost is %i dollars.", totalCost);
