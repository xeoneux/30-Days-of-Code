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
  let n = parseInt((await getline()).toString());
  var numbers = (await getline()).toString();
  var array = numbers.split(" ", n);
  var output = "";
  for(let i=n-1; i>=0; i--){
    output += (array[i] + " ");
  }
  console.log(output)
  rl.close();
})();