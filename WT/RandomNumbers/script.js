const randomNumbers = [];

let limit = parseInt(prompt("Enter the limit : "));

while (limit-- > 0) {
  randomNumbers.push(parseInt(Math.random() * 10 + 1));
}

console.table(randomNumbers);
