const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");

let a = Number(input[0]);
let b = Number(input[1]);

let A, B;

if(a < b){
    A = 1;
} else {
    A = 0;
}

if(a == b){
    B = 1;
} else {
    B = 0;
}

console.log(A, B);