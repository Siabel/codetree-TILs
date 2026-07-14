const fs = require("fs");
let input = fs.readFileSync(0).toString().trim();

const fruits = ["apple", "banana", "grape", "blueberry", "orange"];

let count = 0;

for (let i = 0; i < fruits.length; i++) {
    if (fruits[i][2] === input || fruits[i][3] === input) {
        console.log(fruits[i]);
        count++;
    }
}

console.log(count);