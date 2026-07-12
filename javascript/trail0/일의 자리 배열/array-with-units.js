const fs = require("fs");
let [a, b] = fs.readFileSync(0).toString().trim().split(" ").map(Number);

let arr = new Array(10);

arr[0] = a;
arr[1] = b;

for (let i = 2; i < 10; i++) {
    arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
}

console.log(arr.join(" "));