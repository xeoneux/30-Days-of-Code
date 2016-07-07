import Foundation

let mealCost = Double(readLine()!)!
let tipPercent = Int(readLine()!)!
let taxPercent = Int(readLine()!)!

let tip = Double(tipPercent) * mealCost / 100;
let tax = Double(taxPercent) * mealCost / 100;

let totalCost = round(tip + tax + mealCost);
print("The total meal cost is \(Int(totalCost)) dollars.")
