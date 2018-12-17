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

class Difference {
  elements: Array<number>;
  public maximumDifference: number;

  constructor(elements: Array<number>) {
    this.elements = elements;
  }

  public computeDifference(): void {
    let max = 0;

    for (let i = 0; i < this.elements.length; i++) {
      for (let j = 0; j < this.elements.length; j++) {
        let abs = Math.abs(this.elements[i] - this.elements[j]);
        if (abs > max) max = abs;
      }
    }

    this.maximumDifference = max;
  }
}

(async () => {
  parseInt((await getline()).toString());
  let a = (await getline())
    .toString()
    .split(" ")
    .map(x => parseInt(x));
  let d = new Difference(a);

  d.computeDifference();

  console.log(d.maximumDifference);
})();
