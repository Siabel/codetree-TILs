const fs = require("fs");

const [word1, word2] = fs.readFileSync(0).toString().trim().split(" ");

if (word1.length > word2.length) {
    console.log(word1, word1.length);
} else if (word2.length > word1.length) {
    console.log(word2, word2.length);
} else {
    console.log("same");
}