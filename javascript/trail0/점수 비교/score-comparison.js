const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");

let [a_math, a_eng] = input[0].split(" ").map(Number);
let [b_math, b_eng] = input[1].split(" ").map(Number);

if(a_math > b_math && a_eng > b_eng){
    console.log(1);
} else {
    console.log(0);
}