const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");

let N = Number(input[0]);
let arr = input[1].split(" ").map(Number);
let res = []

for (let i = 0; i < N; i++) {
    res += arr[i] * arr[i] + " ";
}

console.log(res);