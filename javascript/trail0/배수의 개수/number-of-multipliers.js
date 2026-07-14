const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split("\n").map(Number);

let three = 0;
let five = 0;

for (let i = 0; i < 10; i++) {
    if (input[i] % 3 == 0) {
        three++;
    }

    if (input[i] % 5 == 0) {
        five++;
    }
}

console.log(three, five)