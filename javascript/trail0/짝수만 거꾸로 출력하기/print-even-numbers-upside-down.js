const fs = require("fs");

const input = fs.readFileSync(0).toString().trim().split("\n");

const N = Number(input[0]);
const arr = input[1].split(" ").map(Number);
let res = [];

for (let i = N - 1; i >= 0; i--) {
    if (arr[i] % 2 === 0) {
        res += arr[i] + " ";
    }
}

console.log(res);