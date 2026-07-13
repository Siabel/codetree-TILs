const fs = require("fs");

let word = fs.readFileSync(0).toString().trim().split("");

word[1] = "a";
word[word.length - 2] = "a";

console.log(word.join(""));