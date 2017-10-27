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
  for (let i = 0; i < N; i++) {
    let str: string = (await getline()).toString();
    let charArray = str.split("(?!^)");
    for (let j = 0; j < charArray.length; j++) {
      if (j % 2 == 0) {
        console.log(charArray[j]);
      }
    }

    console.log(" ");

    for (let j = 0; j < charArray.length; j++) {
      if (j % 2 != 0) {
        console.log(charArray[j]);
      }
    }

    console.log("");
  }
  process.exit(0);
})();
