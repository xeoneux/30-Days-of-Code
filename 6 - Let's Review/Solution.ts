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

  for (let i = 0; i < N; i++) {
    const str = (await getline()).toString();
    const charArray = str.split("");

    let printStr = "";

    for (let j = 0; j < charArray.length; j++)
      if (j % 2 == 0) printStr += charArray[j];

    printStr += " ";

    for (let j = 0; j < charArray.length; j++)
      if (j % 2 != 0) printStr += charArray[j];

    console.log(printStr);
  }

  rl.close();
})();
